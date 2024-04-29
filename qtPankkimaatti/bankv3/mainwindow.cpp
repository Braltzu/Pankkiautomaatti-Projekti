#include "ui_mainwindow.h"
#include "choosewindow.h"
#include <QMessageBox>
#include "mainwindow.h"
using namespace std;
#include <QString>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
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

    connect(ui->button_clear,SIGNAL(clicked()), this, SLOT(clearButton()));
    connect(ui->button_change,SIGNAL(clicked()), this, SLOT(changeButton()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClick()              //numberClick funktio yhdistää näppäimet ja numerot näytälle myöhemmin
{
    QPushButton * button = (QPushButton*)sender();

    int numeroese1;
    int numeroese2;

    QString newb1;
    QString newb2;

    numeroese1 = (ui->rfidLineEdit->text() + button->text()).toDouble();
    numeroese2 = (ui->pinLineEdit->text() + button->text()).toDouble();

    newb1 = QString::number(numeroese1);    //numeroesen jälkeen tuleva koodin pätkä ", 'g',15);" tarkoittaa sitä kuinka monta numeroa voidaan laittaa boksiin ennen exponentiksi menemistä
    newb2 = QString::number(numeroese2);    //jos sen jättää kokonaan pois on rajana 6 merkkiä mikä on jo tarpeeksi

    if (state2<state){                          //säätelee kumpaan näyttöön laittaa numeroita state:lla 1 state=1 näyttö etc
        ui->pinLineEdit->setText(newb2);
    }
    else {
        ui->rfidLineEdit->setText(newb1);

    }
}

void MainWindow::on_button_clear_clicked(){//backpedal button selittää mitä tekee mutta miten tekee on eriasia...vittu
    ui->rfidLineEdit->clear();
    ui->pinLineEdit->clear();
    void clearButton();
    qDebug() << "clear pressed";
}

void MainWindow::on_button_change_clicked(){
    void changeButton();
    state2 =state;
    state =state3;
    state3 = state2;
    qDebug() << "change pressed";
}

void MainWindow::on_kirjauduButton_clicked()
{
    QString rfid = ui->rfidLineEdit->text();
    QString pin = ui->pinLineEdit->text();

    if (rfid.isEmpty() || pin.isEmpty()) {
        QMessageBox::warning(this, tr("Warning"), tr("Please enter Käyttäjätunnus and PIN."));
        return;
    }

    ChooseWindow *chooseWindow = new ChooseWindow;
    chooseWindow->show();
    close();
}


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
