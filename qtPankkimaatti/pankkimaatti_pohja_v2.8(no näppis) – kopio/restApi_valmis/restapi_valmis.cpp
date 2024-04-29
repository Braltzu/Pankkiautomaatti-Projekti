#include "restapi_valmis.h"
#include <iostream>
//#include "tapahtumat.ui"
//ei vielä valmis, pitää työstää lisää

RestApi_valmis::RestApi_valmis(QObject *parent):QObject(parent)
{
    qDebug()<<"dll luotu";
}

void huuhaa(){
    qDebug()<<"huuhaaaa";
}

void RestApi_valmis::updateTiliSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    putManager->deleteLater();
}

void RestApi_valmis::updateasiakasln(QNetworkReply *reply){
    response_data=reply->readAll();
    qDebug()<<response_data;
    emit sendasiakas(response_data);
    reply->deleteLater();
 //   putManager->deleteLater();
}

void RestApi_valmis::gettilitapahtumaSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"DATA : "+response_data;
    emit sendtilitapahtumatToexe(response_data);
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
       // tilitapahtuma+=QString::number(json_obj["id_tilitapahtumat"].toInt())+", ";
        tilitapahtuma+=QString::number(json_obj["id_tilitapahtumat"].toInt())+", ";
        tilitapahtuma1+=QString::number(json_obj["id_asiakas"].toInt())+", ";
        tilitapahtuma2+=QString::number(json_obj["amout"].toInt())+", ";
        tilitapahtuma3+=json_obj["DATE"].toString()+"\r";
    }
    reply->deleteLater();
    getManager->deleteLater();
}

void RestApi_valmis::getDebitSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"DATA : "+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    emit senddebitToexe(response_data);
    QJsonArray json_array = json_doc.array();
    QString debit;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        debit+=QString::number(json_obj["debitsaldo"].toInt())+"\r";
   //     ui->debitsaldo->setText(debit);
    }
    reply->deleteLater();
    getManager->deleteLater();
}
void RestApi_valmis::getCreditSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"DATA : "+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     emit sendcreditToexe(response_data);
    QJsonArray json_array = json_doc.array();
    QString creditsaldo;
    QString creditluottoraja;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        creditsaldo+=QString::number(json_obj["credit_saldo"].toInt())+" ";
        creditluottoraja+=QString::number(json_obj["creditLuottoraja"].toInt())+" ";
    }
  //  ui->creditsaldo->setText(creditsaldo);
  //  ui->luottoraja->setText(creditluottoraja);
    reply->deleteLater();
    getManager->deleteLater();
}
void RestApi_valmis::getasiakasSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"DATA : "+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString ida;
    QString fn;
    QString ln;
    QString add;
    QString puhnrmo;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        ida+=QString::number(json_obj["id_asiakas"].toInt())+"\r";
        fn+=(json_obj["fname"].toString())+"\r";
        ln+=(json_obj["lname"].toString())+"\r";
        add+=(json_obj["address"].toString()+"\r");
        puhnrmo+=(json_obj["puhnmro"].toString()+"\r");
    }
  //  ui->fname->setText(fn);
  //  ui->lname->setText(ln);
  //  ui->idasiakas->setText(ida);
   // ui->address->setText(add);
  //  ui->puhnrmo->setText(puhnrmo);

    reply->deleteLater();
    getManager->deleteLater();
}
void RestApi_valmis::addtilitapahtumaSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    postManager->deleteLater();
}

void RestApi_valmis::tilitapahtumanetti(){
 //   QString asiakasnumero;
 //   asiakasnumero+=siakasnumr;
  //  vastaanotin3(const QString);
    QString site_url="http://localhost:3000/tilitapahtumat/";
    QNetworkRequest request((site_url));
    //WEBTOKEN ALKU
    //    QByteArray myToken="Bearer "+webToken;
    //    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU
    getManager  = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(gettilitapahtumaSlot(QNetworkReply*)));

    reply = getManager->get(request);
}

void RestApi_valmis::getIdAsiakas(){

}

void RestApi_valmis::Creditnetti(){
 //   QString c="http://localhost:3000/tili/"<<aaa;
    QString site_url="http://localhost:3000/tili/";
    QNetworkRequest request((site_url));
    //WEBTOKEN ALKU
    //    QByteArray myToken="Bearer "+webToken;
    //    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU
    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getCreditSlot(QNetworkReply*)));

    reply = getManager->get(request);
}

void RestApi_valmis::debitnetti(){
    QString site_url="http://localhost:3000/tili";
    QNetworkRequest request((site_url));
    //WEBTOKEN ALKU
    //    QByteArray myToken="Bearer "+webToken;
    //    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU
    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getDebitSlot(QNetworkReply*)));

    reply = getManager->get(request);
}

//QSqlQuery query;
//query.exec("SELECT name, salary FROM employee WHERE salary > 50000");

//QString site_url="http://localhost:3000/tilitapahtumat";
//QNetworkRequest request((site_url));
//WEBTOKEN ALKU
//    QByteArray myToken="Bearer "+webToken;
//    request.setRawHeader(QByteArray("Authorization"),(myToken));
//WEBTOKEN LOPPU
//getManager = new QNetworkAccessManager(this);

//connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(gettilitapahtumaSlot(QNetworkReply*)));

//reply = getManager->get(request);
void RestApi_valmis::peepee(){
    qDebug()<<"peepee";
}

void RestApi_valmis::atili()
{
    QJsonObject jsonObj;
  //  jsonObj.insert("id_tilitapahtuma", "3");
    jsonObj.insert("id_asiakas","1");
    jsonObj.insert("amout","3000");
    jsonObj.insert("DATE","2023-03-14");

    QString site_url="http://localhost:3000/tilitapahtumat";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //WEBTOKEN ALKU
   // QByteArray myToken="Bearer "+webToken;
   // request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(updateTiliSlot(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}
//talteen uutta pankkimaattia varten

void RestApi_valmis::updateasiakas(){

    QString site_url="http://localhost:3000/tili/1";
    //QNetworkRequest request((site_url));
   // request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    emit tiliosoite(site_url);
    //WEBTOKEN ALKU
    //QByteArray myToken="Bearer "+webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU

    //getManager1 = new QNetworkAccessManager(this);
    //connect(getManager1, SIGNAL(finished (QNetworkReply*)), this, SLOT(updateasiakasln(QNetworkReply*)));

   // reply = putManager->put(request, QJsonDocument(jsonObj).toJson());
   // reply = getManager1->get(request);
}

void RestApi_valmis::updateasiakas1(){

    QString site_url1="http://localhost:3000/tili/2";
    //QNetworkRequest request((site_url));
    // request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    emit tiliosoite1(site_url1);
    //WEBTOKEN ALKU
    //QByteArray myToken="Bearer "+webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU

    //getManager1 = new QNetworkAccessManager(this);
    //connect(getManager1, SIGNAL(finished (QNetworkReply*)), this, SLOT(updateasiakasln(QNetworkReply*)));

    // reply = putManager->put(request, QJsonDocument(jsonObj).toJson());
    // reply = getManager1->get(request);
}
