#ifndef CREDIT_H
#define CREDIT_H

#include <QWidget>
#include "restapi_valmis.h"
namespace Ui {
class Credit;
}

class Credit : public QWidget
{
    Q_OBJECT

public:
    explicit Credit(QWidget *parent = nullptr);
    void setWebToken(const QByteArray &newWebToken);
    void setidasiakas(const QString &newidasiakas);
    void velka();
    ~Credit();

private slots:
    void on_CR_button_takaisin_clicked();
        void ReceiveCredit(QNetworkReply *reply);

    void on_CRbutton_Nosto_clicked();

private:
    Ui::Credit *ui;
    QNetworkReply *reply;
    QByteArray webtoken;
    QString idasiakas;
    QByteArray response_data;
    QNetworkAccessManager *getManager;
    RestApi_valmis *pcRest;
};

#endif // CREDIT_H
