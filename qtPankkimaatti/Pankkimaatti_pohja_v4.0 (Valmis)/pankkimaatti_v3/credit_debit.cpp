//------------------------------
#include "credit_debit.h"
#include "ui_credit_debit.h"
#include "credit.h"
#include "debit.h"
#include "tapahtumat.h"

//------------------------------
#include <QDebug>
#include <QString>
#include <QMessageBox>

credit_debit::credit_debit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::credit_debit)


{
    ui->setupUi(this);
}

credit_debit::~credit_debit()
{
    delete ui;
}
void credit_debit::setWebToken(const QByteArray &newWebToken){
    webtoken=newWebToken;
}

void credit_debit::setidasiakas(const QString &newidasiakas){
    idasiakas=newidasiakas;
}

void credit_debit::asiakasid(QNetworkReply *reply){
    qDebug()<<"asiakas idn haku";
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();

    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        // debitsaldo+=QString::number(json_obj["debitsaldo"].toInt())+"";
        naa+=QString::number(json_obj["id_asiakas"].toInt())+"";
        // emit taistelija(idasiakas);
        qDebug()<<naa;
    }
}

void credit_debit::idtoteutin(){
    qDebug()<<"id aloitettu";
    QString site_url="http://localhost:3000/idasiakas/"+idasiakas;
    QNetworkRequest request((site_url));
    //WEBTOKEN ALKU
    QByteArray myToken="Bearer "+webtoken;
    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU
    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(asiakasid(QNetworkReply*)));

    reply = getManager->get(request);
    qDebug()<<"tieto siirtyy";
}

//NAPIT
//-------------------------------------------------------------------------
void credit_debit::on_CRDB_button_credit_clicked(){    //reitti credit osioon

    qDebug() <<"credit painettu";

    QMessageBox::information(this, tr("ValintaBox"), tr("Credit valittu."));
    Credit *CreditWindow =new Credit;
    CreditWindow->setWebToken(webtoken);
    CreditWindow->setidasiakas(naa);
    CreditWindow->velka();
    CreditWindow->show();
    close();

}

void credit_debit::on_CRDB_button_debit_clicked(){      //debit osioon reitti
    qDebug() <<"debit painettu";

    QMessageBox::information(this, tr("ValintaBox"), tr("Debit valittu."));
    debit *debitWindow =new debit;
    debitWindow->setWebToken(webtoken);
    debitWindow->setidasiakas(naa);
    debitWindow->rahat();
    debitWindow->show();
    close();

}

void credit_debit::on_CRDB_button_tapahtumat_clicked(){    //tilitapahtumiin reitti
    qDebug() <<"tilitapahtumat painettu";

    QMessageBox::information(this, tr("ValintaBox"), tr("Tilitapahtumat valittu."));
    tapahtumat *tapahtumatWindow =new tapahtumat;
    tapahtumatWindow->setWebToken(webtoken);
    tapahtumatWindow->setidasiakas(naa);
    tapahtumatWindow->ReceiveTilitapahtumat();
    tapahtumatWindow->show();
    close();

}
//-----------------------------------------------------------------------------------
