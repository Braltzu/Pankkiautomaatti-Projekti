//------------------
#include "nosto.h"
#include <QDate>
#include "ui_nosto.h"
#include "muu_summa.h"
#include "debit.h"
//------------------
#include <QDebug>
#include <QMessageBox>

nosto::nosto(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::nosto)
{
    ui->setupUi(this);
}

nosto::~nosto()
{
    delete ui;
}

void nosto::prepareUpdate() {
    // Call update function here, ensuring data is ready
    receiveupdateasiak();
}
void nosto::setidasiakas(const QString &newidasiakas){
    idasiakas=newidasiakas;
}

void nosto::setWebToken(const QByteArray &newWebToken){
    webtoken=newWebToken;
}

//spesiaali NiBBelit
//-----------------------------------------
void nosto::on_no_button_MS_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("Muu summa valittu."));
    muu_summa *muu_summaWindow =new muu_summa;
    muu_summaWindow->setWebToken(webtoken);
    muu_summaWindow->setidasiakas(idasiakas);
    muu_summaWindow->nostot();
    muu_summaWindow->show();
    close();
}

void nosto::on_no_button_takaisin_clicked()
{
    QMessageBox::information(this, tr("valintaBox"), tr("takaisin."));
    debit *debitWindow =new debit;
    debitWindow->show();
    close();
}
//-----------------------------------------
//raha nosto NiBBelit
//-----------------------------------------
void nosto::on_no_button_500_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("500€ summa valittu."));
    nostomaara=QString::number(500);
    prepareUpdate();
    receiveupdateasiak();
    addtilitapahtuma();

}


void nosto::on_no_button_200_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("200€ summa valittu."));
    nostomaara=QString::number(200);
   prepareUpdate();
    receiveupdateasiak();
   addtilitapahtuma();

}


void nosto::on_no_button_100_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("100€ summa valittu."));
    nostomaara=QString::number(100);
prepareUpdate();
    receiveupdateasiak();
addtilitapahtuma();

}


void nosto::on_no_button_50_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("50€ summa valittu."));
nostomaara=QString::number(50);
prepareUpdate();
   receiveupdateasiak();
addtilitapahtuma();

}


void nosto::on_no_button_20_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("20€ summa valittu."));
nostomaara=QString::number(20);
prepareUpdate();
     receiveupdateasiak();
addtilitapahtuma();

}


void nosto::on_no_button_10_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("10€ summa valittu."));
nostomaara=QString::number(10);
prepareUpdate();
     receiveupdateasiak();
addtilitapahtuma();

}


void nosto::on_no_button_5_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("5€ summa valittu."));
nostomaara=QString::number(5);
prepareUpdate();
     receiveupdateasiak();
addtilitapahtuma();

}

void nosto::gettili(QNetworkReply *reply){
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    qDebug()<<response_data;
    idtili.clear();
    idasiakas.clear();
    debitt.clear();
    credit.clear();
    creditTilin.clear();
    debitTilin.clear();
    CreditLuottoraja.clear();
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        // debitsaldo+=QString::number(json_obj["debitsaldo"].toInt())+"\r";
        debitt+=QString::number(json_obj["debitsaldo"].toInt())+" ";
        idtili+=QString::number(json_obj["id_tili"].toInt())+" ";
        qDebug()<<"tili id haettaessa "+idtili;
        idasiakas+=QString::number(json_obj["id_asiakas"].toInt())+" ";
        credit+=QString::number(json_obj["credit_saldo"].toInt())+" ";
        creditTilin+=json_obj["creditTilinumero"].toString()+" ";
        debitTilin+=json_obj["debitTilinumero"].toString()+" ";
        CreditLuottoraja+=QString::number(json_obj["creditLuottoraja"].toInt())+" ";
        emit dataReady();
    }
}

void nosto::gettilitys(QNetworkReply *reply){
    response_data =reply->readAll();
    qDebug()<<"mitä pitäisi tapahtua";
    qDebug()<<response_data;
    reply->deleteLater();
    putManager->deleteLater();
}

void nosto::nostot(){
    qDebug()<<"haetaan asiakkaan tilitiedot";
    QString site_url="http://localhost:3000/tili/"+idasiakas;
    qDebug()<<site_url;
    QNetworkRequest request((site_url));
    QByteArray myToken="Bearer "+webtoken;
    qDebug()<<myToken;
    request.setRawHeader(QByteArray("Authorization"),(myToken));
    qDebug()<<"webtoken nostoissa "+webtoken;
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(gettili(QNetworkReply*)));
    reply=getManager->get(request);
}


void nosto::receiveupdateasiak(){
    if (idtili.isEmpty()) {
        qDebug() << "Error: idtili is empty";
        return;
    }
    int debittInt = debitt.toInt(); // assuming 'debitt' can be safely converted to an integer
    int nostomaaraInt = nostomaara.toInt(); // same assumption for 'nostomaara'
    int updatedDebitsaldo = debittInt - nostomaaraInt;
    if(updatedDebitsaldo>0){
    QJsonObject jsonObj;
    jsonObj.insert("id_asiakas", idasiakas);
    jsonObj.insert("debitsaldo", QString::number(updatedDebitsaldo));  // Example value
    jsonObj.insert("credit_saldo", credit);
    jsonObj.insert("creditTilinumero", creditTilin);
    jsonObj.insert("debitTilinumero", debitTilin);
    jsonObj.insert("creditLuottoraja", CreditLuottoraja);

    QString site_url = "http://localhost:3000/tili/" + idtili.trimmed();
    qDebug() << "PUT URL:" << site_url;

    QNetworkRequest request(site_url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray myToken = "Bearer " + webtoken;
    request.setRawHeader("Authorization", myToken);

    putManager = new QNetworkAccessManager(this);
    connect(putManager, &QNetworkAccessManager::finished, this, &nosto::gettilitys);
    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());
    }
    else
    {
    QMessageBox msgbox;
    msgbox.setText("tili olisi menossa miinukselle");
    msgbox.exec();
    }
    }

void nosto::addtili(QNetworkReply *reply){
    response_data =reply->readAll();
    qDebug()<<"mitä pitäisi tapahtua";
    qDebug()<<response_data;
    reply->deleteLater();
    putManager->deleteLater();
}

void nosto::addtilitapahtuma(){
    QDate currentDate = QDate::currentDate();
    QString dateString = currentDate.toString(Qt::ISODate);
    QJsonObject jsonObj;
    jsonObj.insert("id_asiakas", idasiakas);
    jsonObj.insert("amout", "-"+nostomaara);  // Example value
    jsonObj.insert("DATE", dateString);


    QString site_url = "http://localhost:3000/tilitapahtumat/";
    qDebug() << "PUT URL:" << site_url;

    QNetworkRequest request(site_url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray myToken = "Bearer " + webtoken;
    request.setRawHeader("Authorization", myToken);
    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(addtili(QNetworkReply*)));
    reply = putManager->post(request, QJsonDocument(jsonObj).toJson());
}

//-----------------------------------------



