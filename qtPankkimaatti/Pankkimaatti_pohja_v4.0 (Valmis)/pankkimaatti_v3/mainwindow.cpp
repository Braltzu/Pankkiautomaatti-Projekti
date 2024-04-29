//-----------------------------
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "credit_debit.h"

//-----------------------------
using namespace std;
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

// PINUI ja RFID connectit
//-----------------------------------------------------------------------------------------------------------
{
    ui->setupUi(this);

    //Pinui
    //_________________________________________________________________________________+
    //  alustus ja uuden Dialog olion luonti                                           |
    //                                                                                 |
    ptr_dll = new Dialog(this);                                                      //|
    connect(ptr_dll, SIGNAL(sendString(QString)), this, SLOT(onSendString(QString)));//|
    //                                                                                 |
        //nappi aktivoi showDialogin                                                   |
    connect(ui->pushButton,SIGNAL(clicked(bool)), this,SLOT(showDialog()));          //|
    //_________________________________________________________________________________

    //RFID
    //_________________________________________________________________________________
    ptr_RFID = new SerialPortReader(this);
        //ptr_RFID->CheckCorrectport();
    ptr_RFID->startReading();
    connect(ptr_RFID, SIGNAL(numberRead(QString)), this, SLOT(ReceiveCardNum(QString)));
    //---------------------------------------------------------------------------------
}
//-----------------------------------------------------------------------------------------------------------

MainWindow::~MainWindow()
{
    delete ui;
}

//PINUI Section
//--------------------------------------------------
void MainWindow::showDialog()
{
        //näyttää dialogin
    ptr_dll->show();
}

void MainWindow::onSendString(const QString &num)
{       //päivittää mw_line_pin pinui lähettämillä numeroilla
    ui->line_pin->setText(num);
}
//--------------------------------------------------

//RFID
//--------------------------------------------------
void MainWindow::ReceiveCardNum(QString numTrim)
{

    CardNum=numTrim;
    qDebug()<<"rfid cardnumber= "<<CardNum;

    ui->line_tunnus->setText(numTrim);  //RFID num printtaa heti kun laite saa kortin lähelleen
}
//--------------------------------------------------


//KIRJAUTUMISTUNNUS LAATIKOT
//---------------------------------------------------------------
void MainWindow::on_line_tunnus_textChanged(const QString &arg1)
{


}

void MainWindow::on_line_pin_textChanged(const QString &arg1)
{

}
//-----------------------------------------------------------------
void MainWindow::logindata(QNetworkReply *reply){
    qDebug()<<"logindata";
    response_data=reply->readAll();
    qDebug()<<response_data;
    QMessageBox msgBox;
    if(response_data=="-4078"||response_data.length()==0){
        msgBox.setText("virhe yhteydessä");
            msgBox.exec();
    }
    else{
        if(response_data!="false"){
            qDebug()<<"hellyeah";
            msgBox.setText("yhteys kunnossa");
            msgBox.exec();
            QMessageBox::information(this, tr("Kirjaudu"), tr("Kirjautuminen onnistui."));
            //  boing->ReceiveTilitapahtumat();
            //   Credit *poing;
            //   poing =new Credit(this);
            //   poing->setWebToken(response_data);
            //   debit *oing;
            //   oing =new debit(this);
            //   oing->setWebToken(response_data);
            //   nosto *soing;
            //   soing =new nosto(this);
            //   soing->setWebToken(response_data);
            credit_debit *credit_debitWindow =new credit_debit;
            credit_debitWindow->setWebToken(response_data);
            credit_debitWindow->setidasiakas(ui->line_tunnus->text());
            credit_debitWindow->idtoteutin();
            credit_debitWindow->show();

            // credit_debit *credit_debitWindow =new credit_debit;
            // credit_debitWindow->show();
        }
        else{
            msgBox.setText("pin tai num ei ole oikein");
            msgBox.exec();
            ui->line_tunnus->clear();
            ui->line_pin->clear();
        }
    }
}
//Erikois Nibbelit
//---------------------------------------------------------
void MainWindow::on_button_kirjaudu_clicked(){
                                                        //lisää pswrd tarkistus
    qDebug() << "kirjaudu pressed";
    //lisää pswrd tarkistus
    QString site_url="http://localhost:3000/login/";
    //qDebug()<<site_url;
    //Qstring site;
    QString cardnum=ui->line_tunnus->text();
    QString pin=ui->line_pin->text();
    QJsonObject jsonObj;
    jsonObj.insert("securityNum",cardnum);
    jsonObj.insert("PIN", pin);
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    loginManager = new QNetworkAccessManager(this);
    qDebug()<<cardnum;
    qDebug()<<pin;
    connect(loginManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(logindata(QNetworkReply*)));
    reply=loginManager->post(request, QJsonDocument(jsonObj).toJson());
    qDebug() << "kirjaudu pressed";
}

void MainWindow::on_button_clear_clicked()
{
    ui->line_pin->setText("");
    ui->line_tunnus->setText("");
    qDebug() << "clear pressed";
}
//---------------------------------------------------------















