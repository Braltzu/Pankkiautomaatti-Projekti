#ifndef NOSTO_H
#define NOSTO_H

#include <QWidget>
#include "restapi_valmis.h"
namespace Ui {
class nosto;
}

class nosto : public QWidget
{
    Q_OBJECT

public:
    explicit nosto(QWidget *parent = nullptr);
    void setWebToken(const QByteArray &newWebToken);
    void setidasiakas(const QString &newidasiakas);

    QString idtili;
    QString idasiakas;
    QString credit;
    QString creditTilin;
    QString debitTilin;
    QString CreditLuottoraja;
    QString debitt;
    QByteArray webtoken;
    ~nosto();
signals:
    void dataReady();

public slots:
    void receiveupdateasiak();
    void prepareUpdate();
    void nostot();
    void addtilitapahtuma();
private slots:
    void gettilitys(QNetworkReply *reply);
    void gettili(QNetworkReply *reply);
    void addtili(QNetworkReply *reply);
    void on_no_button_MS_clicked();

    void on_no_button_500_clicked();

    void on_no_button_200_clicked();

    void on_no_button_100_clicked();

    void on_no_button_50_clicked();

    void on_no_button_20_clicked();

    void on_no_button_10_clicked();

    void on_no_button_5_clicked();

    void on_no_button_takaisin_clicked();

private:
    Ui::nosto *ui;
    RestApi_valmis *aptr;
    QString nostomaara;
    //QByteArray webtoken;
    QNetworkReply *reply;
    //  QString idasiakas;
    QByteArray response_data;
    QNetworkAccessManager *getManager;
    QNetworkAccessManager *putManager;


};

#endif // NOSTO_H
