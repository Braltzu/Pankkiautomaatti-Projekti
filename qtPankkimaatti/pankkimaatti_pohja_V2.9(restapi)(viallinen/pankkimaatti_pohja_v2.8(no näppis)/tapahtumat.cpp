//------------------------
#include "tapahtumat.h"
#include "ui_tapahtumat.h"
#include "credit_debit.h"
//------------------------
#include <QMessageBox>
//------------------------

tapahtumat::tapahtumat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tapahtumat)
{
    ui->setupUi(this);
    pRest=new RestApi_valmis(this);
    connect(pRest, SIGNAL(sendtilitapahtumatToexe(QByteArray)),this, SLOT(ReceiveTilitapahtumat(QByteArray)));
    pRest->tilitapahtumanetti();
}

tapahtumat::~tapahtumat()
{
    delete ui;
}
void tapahtumat::ReceiveTilitapahtumat(QByteArray a){
    QString tilitapahtuma;
    QString tilitapahtuma1;
    QString tilitapahtuma2;
    QString tilitapahtuma3;
    QJsonDocument json_doc = QJsonDocument::fromJson(a);
    QJsonArray json_array = json_doc.array();

    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        tilitapahtuma+=QString::number(json_obj["id_tilitapahtumat"].toInt())+", ";
        tilitapahtuma+=QString::number(json_obj["id_tilitapahtumat"].toInt())+", ";
        tilitapahtuma1+=QString::number(json_obj["id_asiakas"].toInt())+", ";
        tilitapahtuma2+=QString::number(json_obj["amout"].toInt())+", ";
        tilitapahtuma3+=json_obj["DATE"].toString()+"\r";
    }
    ui->tapa_line_tapahtumat->setText(tilitapahtuma+tilitapahtuma1+tilitapahtuma2+tilitapahtuma3);
}

//simppeli takaisin nappi loput asiat tulevat suoraan API:sta
//------------------------------------------------
void tapahtumat::on_tapa_button_takaisin_clicked()
{
    QMessageBox::information(this, tr("valintaBox"), tr("Takaisin."));
    credit_debit *credit_debitWindow =new credit_debit;
    credit_debitWindow->show();
    close();
}
//-----------------------------------------------
