#include "dialog.h"
#include "ui_dialog.h"
#include <QPushButton>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(onNumberButtonClicked()));
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(onNumberButtonClicked()));
    connect(ui->pushButton_3, SIGNAL(clicked(bool)), this, SLOT(onNumberButtonClicked()));
    connect(ui->pushButton_4, SIGNAL(clicked(bool)), this, SLOT(onNumberButtonClicked()));
    connect(ui->pushButton_5, SIGNAL(clicked(bool)), this, SLOT(onNumberButtonClicked()));
    connect(ui->pushButton_6, SIGNAL(clicked(bool)), this, SLOT(onNumberButtonClicked()));
    connect(ui->pushButton_7, SIGNAL(clicked(bool)), this, SLOT(onNumberButtonClicked()));
    connect(ui->pushButton_8, SIGNAL(clicked(bool)), this, SLOT(onNumberButtonClicked()));
    connect(ui->pushButton_9, SIGNAL(clicked(bool)), this, SLOT(onNumberButtonClicked()));
    connect(ui->pushButton_10, SIGNAL(clicked(bool)), this, SLOT(onNumberButtonClicked()));
    connect(ui->pushButton_ok, SIGNAL(clicked()), this, SLOT(onOkButtonClicked()));
    connect(ui->pushButton_back, SIGNAL(clicked()), this, SLOT(onBackButtonClicked()));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onNumberButtonClicked()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        QString buttonText = button->text();
        ui->lineEdit->setText(ui->lineEdit->text() + buttonText);
    }
}

void Dialog::onOkButtonClicked()
{
    QString num = ui->lineEdit->text();
    emit sendString(num); // lähettää kirjoitetut numerot
    ui->lineEdit->clear(); //pyyhkii kirjoitetut numerot
     this->close();
}

void Dialog::onBackButtonClicked()
{   //pyyhkii yhden numeron
    QString text = ui->lineEdit->text();
    if (!text.isEmpty()) {
        text.chop(1);
        ui->lineEdit->setText(text);
    }}
