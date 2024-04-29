#include "restapi_valmis.h"

//ei vielä valmis, pitää työstää lisää

RestApi_valmis::RestApi_valmis()
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
void RestApi_valmis::gettilitapahtumaSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"DATA : "+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString tilitapahtuma;
    QString tilitapahtuma1;
    QString tilitapahtuma2;
    QString tilitapahtuma3;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        tilitapahtuma+=QString::number(json_obj["id_tilitapahtumat"].toInt())+", ";
        tilitapahtuma1+=QString::number(json_obj["id_asiakas"].toInt())+", ";
        tilitapahtuma2+=QString::number(json_obj["amout"].toInt())+", ";
        tilitapahtuma3+=json_obj["DATE"].toString()+"\r";
    }
  //  ui->tilitapahtumatext->setText(tilitapahtuma+tilitapahtuma1+tilitapahtuma2+tilitapahtuma3);
}
void RestApi_valmis::getDebitSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"DATA : "+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString debit;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        debit+=QString::number(json_obj["debitsaldo"].toInt())+"\r";
   //     ui->debitsaldo->setText(debit);
    }
}
void RestApi_valmis::getCreditSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"DATA : "+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
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
void RestApi_valmis::addAsiakasSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    postManager->deleteLater();
}
//void MainWindow::on_updatetili_clicked()
//{
//    QJsonObject jsonObj;
//    jsonObj.insert("id_asiakas","2");
//    jsonObj.insert("debitsaldo","30000");
//    jsonObj.insert("credit_saldo","10");
//    jsonObj.insert("creditTilinumero","FI62 5621 7621 4562 33");
//    jsonObj.insert("debitTilinumero","FI62 5621 7621 4562 34");
//    jsonObj.insert("creditLuottoraja","10");
    //jsonObj.insert("isbn","xxx-yyy-zzzz");

//    QString site_url="http://localhost:3000/tili/2";
//    QNetworkRequest request((site_url));
//    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //WEBTOKEN ALKU
    //    QByteArray myToken="Bearer "+webToken;
    //    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU

//    putManager = new QNetworkAccessManager(this);
//    connect(putManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(updateTiliSlot(QNetworkReply*)));

//    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

//}
