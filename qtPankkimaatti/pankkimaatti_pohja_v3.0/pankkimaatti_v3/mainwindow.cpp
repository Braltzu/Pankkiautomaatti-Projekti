//-----------------------------
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "credit_debit.h"

//-----------------------------
using namespace std;
#include <QMessageBox>
#include <QString>
#include <QDebug>

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
void MainWindow::ReceiveCardNum(QString Num)
{
    CardNum=Num;
    qDebug()<<"rfid cardnumber= "<<CardNum;

    ui->line_tunnus->setText(Num);  //RFID num printtaa heti kun laite saa kortin lähelleen
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

//Erikois Nibbelit
//---------------------------------------------------------
void MainWindow::on_button_kirjaudu_clicked(){
                                                        //lisää pswrd tarkistus
    qDebug() << "kirjaudu pressed";

    QMessageBox::information(this, tr("Kirjaudu"), tr("Kirjautuminen onnistui."));
    credit_debit *credit_debitWindow =new credit_debit;
    credit_debitWindow->show();
    close();
}

void MainWindow::on_button_clear_clicked()
{
    ui->line_pin->setText("");
    ui->line_tunnus->setText("");
    qDebug() << "clear pressed";
}
//---------------------------------------------------------















