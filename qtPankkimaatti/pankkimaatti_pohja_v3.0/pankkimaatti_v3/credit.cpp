//-----------------------
#include "credit.h"
#include "ui_credit.h"
#include "credit_debit.h"

//-----------------------
#include <QMessageBox>
#include <QString>

Credit::Credit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Credit)
{
    ui->setupUi(this);
    RestApi_valmis *pcRest;
    pcRest=new RestApi_valmis(this);
    connect(pcRest, SIGNAL(sendcreditToexe(QByteArray)),this, SLOT(ReceiveCredit(QByteArray)));
    pcRest->Creditnetti();
}

Credit::~Credit()
{
    delete ui;
}
void Credit::ReceiveCredit(QByteArray c){
    //  ui->CR_line_luottoraja->setText(QString::fromUtf8(a));
    QString creditsaldo;
    QString creditluottoraja;
    QJsonDocument json_doc = QJsonDocument::fromJson(c);
    QJsonArray json_array = json_doc.array();

    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        creditsaldo+=QString::number(json_obj["credit_saldo"].toInt())+" ";
        creditluottoraja+=QString::number(json_obj["creditLuottoraja"].toInt())+"\r";
    }
    ui->CR_line_luottoraja->setText(creditluottoraja);
    ui->CR_line_saldo->setText(creditsaldo);
}
//Nappi takaisin suurin osa toiminnasta tehdään API:ssa
//--------------------------------------------------------------------------------
void Credit::on_CR_button_takaisin_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("Takaisin."));
    credit_debit *credit_debitWindow =new credit_debit;
    credit_debitWindow->show();
    close();
}
//--------------------------------------------------------------------------------
