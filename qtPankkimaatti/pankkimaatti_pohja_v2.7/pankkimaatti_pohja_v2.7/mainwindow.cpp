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

//connectit, PINUI ja RFID
//-----------------------------------------------------------------------------------------------------------
{
    ui->setupUi(this);
    connect(ui->button_0,SIGNAL(clicked()), this, SLOT(numberClick()));       //numbers MASON WHAT DO THEY MEAN????
    connect(ui->button_1,SIGNAL(clicked()), this, SLOT(numberClick()));       //näppäimiä sitä nämä ovat
    connect(ui->button_2,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->button_3,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->button_4,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->button_5,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->button_6,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->button_7,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->button_8,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->button_9,SIGNAL(clicked()), this, SLOT(numberClick()));

    connect(ui->button_kirjaudu,SIGNAL(clicked()), this, SLOT(kirjauduButton()));
    connect(ui->button_clear,SIGNAL(clicked()), this, SLOT(clearButton()));
    connect(ui->button_change,SIGNAL(clicked()), this, SLOT(changeButton()));

        //Pinui
    //_________________________________________________________________________________+
    //alustus ja uuden Dialog olion luonti                                             |
    //                                                                                 |
    ptr_dll = new Dialog(this);                                                      //|
    connect(ptr_dll, SIGNAL(sendString(QString)), this, SLOT(onSendString(QString)));//|
    //                                                                                 |
    //nappi aktivoi showDialogin                                                       |
    connect(ui->pushButton,SIGNAL(clicked(bool)), this,SLOT(showDialog()));          //|
    //_________________________________________________________________________________+

        //RFID
    //_________________________________________________________________________________
    ptr_RFID = new SerialPortReader(this);
    //ptr_RFID->CheckCorrectport();
    ptr_RFID->startReading();
    connect(ptr_RFID, SIGNAL(numberRead(QString)), this, SLOT(ReceiveCardNum(QString)));
    //----------------------------------------------------------------------------------
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
            // näyttää dialogin
    ptr_dll->show();
}

void MainWindow::ReceiveCardNum(QString Num)
{
    CardNum=Num;
    qDebug()<<"rfid cardnumber= "<<CardNum;
    ui->line_tunnus->setText(Num);
}

void MainWindow::onSendString(const QString &num)
{           // päivittää mw_line_pin pinui lähettämillä numeroilla
    ui->line_pin->setText(num);
}
//--------------------------------------------------


//---------------------------------------------------------------
//KIRJAUTUMISTUNNUS LAATIKOT
//---------------------------------------------------------------
void MainWindow::on_line_tunnus_textChanged(const QString &arg1)
{
    number1 = arg1.toFloat();

}

void MainWindow::on_line_pin_textChanged(const QString &arg1)
{
    number2 = arg1.toFloat();
}

//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
void MainWindow::numberClick()//numberClick funktio yhdistää näppäimet ja numerot näytälle myöhemmin
{
 QPushButton * button = (QPushButton*)sender();

 double numeroese1;
 double numeroese2;

 QString newb1;
 QString newb2;

    numeroese1 = (ui->line_tunnus->text() + button->text()).toDouble();
    numeroese2 = (ui->line_pin->text() + button->text()).toDouble();

    newb1 = QString::number(numeroese1);    //numeroesen jälkeen tuleva koodin pätkä ", 'g',15);" tarkoittaa sitä kuinka monta numeroa voidaan laittaa boksiin ennen exponentiksi menemistä
    newb2 = QString::number(numeroese2);    //jos sen jättää kokonaan pois on rajana 6 merkkiä mikä on jo tarpeeksi

 if (state==2){                          //säätelee kumpaan näyttöön laittaa numeroita state:lla 1 state=1 näyttö etc
     ui->line_pin->setText(newb2);
 }
 else{
     ui->line_tunnus->setText(newb1);
 }
}
//-----------------------------------------------------------------



//Erikois Nibbelit
//---------------------------------------------------------
void MainWindow::on_button_kirjaudu_clicked(){
                                                        //lisää pswrd tarkistus
    void kirjauduButton();
    qDebug() << "kirjaudu pressed";

    QMessageBox::information(this, tr("Kirjaudu"), tr("Kirjautuminen onnistui."));
    credit_debit *credit_debitWindow =new credit_debit;
    credit_debitWindow->show();
    close();
}

void MainWindow::on_button_clear_clicked(){

    void clearButton();
    state =1;
    ui->line_pin->setText(" ");
    ui->line_tunnus->setText(" ");
    qDebug() << "clear pressed";
}

void MainWindow::on_button_change_clicked(){
    void changeButton();
    state  =2;
    qDebug() << "change pressed";
}
//---------------------------------------------------------


//numeronäppäimet ja niiden debugit
//-----------------------------------------------------
void MainWindow::on_button_0_clicked(){
    numberClick();
    qDebug() << "num 0 pressed";
}

void MainWindow::on_button_1_clicked()
{
    numberClick();
    qDebug() << "num 1 pressed";
}


void MainWindow::on_button_2_clicked()
{
    numberClick();
    qDebug() << "num 2 pressed";
}


void MainWindow::on_button_3_clicked()
{
    numberClick();
    qDebug() << "num 3 pressed";
}


void MainWindow::on_button_4_clicked()
{
    numberClick();
    qDebug() << "num 4 pressed";
}


void MainWindow::on_button_5_clicked()
{
    numberClick();
    qDebug() << "num 5 pressed";
}


void MainWindow::on_button_6_clicked()
{
    numberClick();
    qDebug() << "num 6 pressed";
}


void MainWindow::on_button_7_clicked()
{
    numberClick();
    qDebug() << "num 7 pressed";
}


void MainWindow::on_button_8_clicked()
{
    numberClick();
    qDebug() << "num 8 pressed";
}


void MainWindow::on_button_9_clicked()
{
    numberClick();
    qDebug() << "num 9 pressed";
}
//-----------------------------------------------------
















