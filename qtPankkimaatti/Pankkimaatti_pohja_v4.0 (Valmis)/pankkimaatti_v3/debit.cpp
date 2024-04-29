//.h tiedostot
//------------------
#include "debit.h"
#include "ui_debit.h"
#include "nosto.h"
#include "credit_debit.h"
//------------------
//erilliset tarvittavat
#include <QDebug>
#include <QString>
#include <QMessageBox>
//------------------

debit::debit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::debit)
{
    ui->setupUi(this);

}
void debit::setWebToken(const QByteArray &newWebToken){
    webtoken=newWebToken;
}

void debit::setidasiakas(const QString &newidasiakas){
    idasiakas=newidasiakas;
}
void debit::rahat(){
    QString site_url="http://localhost:3000/tili/"+idasiakas;
    QNetworkRequest request((site_url));
    //WEBTOKEN ALKU
    QByteArray myToken="Bearer "+webtoken;
    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU
    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(ReceiveDebit(QNetworkReply*)));

    reply = getManager->get(request);
}

void debit::ReceiveDebit(QNetworkReply *reply){
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();

    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        // debitsaldo+=QString::number(json_obj["debitsaldo"].toInt())+"\r";
        debitt+=QString::number(json_obj["debitsaldo"].toInt())+"";
        idtili+=QString::number(json_obj["id_tili"].toInt())+"";
        //idasiakas+=QString::number(json_obj["id_asiakas"].toInt())+"";
        credit+=QString::number(json_obj["credit_saldo"].toInt())+"";
        creditTilin+=json_obj["creditTilinumero"].toString()+"";
        debitTilin+=json_obj["debitTilinumero"].toString()+"";
        CreditLuottoraja+=QString::number(json_obj["creditLuottoraja"].toInt())+"";
    }
    ui->DB_line_saldo->setText(debitt);
}
debit::~debit()
{
    delete ui;
}


//näyttö säädöt tulevat RestAPI:n kautta
//-----------------------------------------------------------
void debit::on_DB_line_saldo_textChanged(const QString &arg1)
{
}
//-----------------------------------------------------------

//buttons
//-------------------------------------------------
void debit::on_DB_button_nosto_clicked()
{
    qDebug() << "nosto pressed";

    QMessageBox::information(this, tr("ValintaBox"), tr("Nosto valittu."));
    nosto *nostoWindow =new nosto;
    nostoWindow->setWebToken(webtoken);
    nostoWindow->setidasiakas(idasiakas);
    nostoWindow->nostot();
    nostoWindow->show();
    close();
}


void debit::on_DB_button_takaisin_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("Takaisin."));
    credit_debit *credit_debitWindow =new credit_debit;
    credit_debitWindow->show();
    close();
}
//-------------------------------------------------


