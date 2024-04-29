#ifndef RESTAPI_VALMIS_H
#define RESTAPI_VALMIS_H
#include <iostream>
#include <qobject>
#include "restApi_valmis_global.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include<QDebug>
//#include <QSqlQuery>
//#include "restapi_valmis.cpp"
using namespace std;
class RESTAPI_VALMIS_EXPORT RestApi_valmis : public QObject
{
    Q_OBJECT
public:
    RestApi_valmis(QObject *parent=nullptr);
    QString tilitapahtuma;
    QString tilitapahtuma1;
    QString tilitapahtuma2;
    QString tilitapahtuma3;
    QString aaa;
    QString siakas;
    QString siakasnumr;
    void tilitapahtumanetti();
    void Creditnetti();
    void debitnetti();
    void tili();
    void atili();
    void peepee();
    void updateasiakas();
    void updateasiakas1();
    void getIdAsiakas();
public slots:

private slots:
    void updateTiliSlot (QNetworkReply *reply);
    void updateasiakasln(QNetworkReply *reply);
    void addtilitapahtumaSlot(QNetworkReply *reply);
    void gettilitapahtumaSlot (QNetworkReply *reply);
    void getasiakasSlot (QNetworkReply *reply);
    void getDebitSlot (QNetworkReply *reply);
    void getCreditSlot (QNetworkReply *reply);
signals:
    void sendTiliToexe(QByteArray);
    void sendtilitapahtumatToexe(QByteArray);
    void senddebitToexe(QByteArray);
    void sendcreditToexe(QByteArray);
    void addtilitoexe(QByteArray);
    void sendasiakas(QByteArray);
    void tiliosoite (const QString &site_url);
    void tiliosoite1 (const QString &site_url1);
private:
    QNetworkAccessManager *getManager;
    QNetworkAccessManager *getManager1;
    QNetworkReply *reply;
    QByteArray response_data;
    QNetworkAccessManager *putManager;
    QNetworkAccessManager *postManager;
};

void huuhaa();
#endif // RESTAPI_VALMIS_H
