#ifndef RESTAPI_VALMIS_H
#define RESTAPI_VALMIS_H

#include "restApi_valmis_global.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include<QDebug>

class RESTAPI_VALMIS_EXPORT RestApi_valmis
{
public:
    RestApi_valmis();
private:
    QNetworkAccessManager *putManager;
    QNetworkAccessManager *getManager;
    QNetworkAccessManager *postManager;
    QNetworkReply *reply;
    QByteArray response_data;
private slots:
    void updateTiliSlot (QNetworkReply *reply);
    void gettilitapahtumaSlot (QNetworkReply *reply);
    void getasiakasSlot (QNetworkReply *reply);
    void addAsiakasSlot (QNetworkReply *reply);
    void getDebitSlot (QNetworkReply *reply);
    void getCreditSlot (QNetworkReply *reply);
};

void huuhaa();

#endif // RESTAPI_VALMIS_H
