#ifndef TAPAHTUMAT_H
#define TAPAHTUMAT_H

#include <QWidget>
#include "restapi_valmis.h"
namespace Ui {
class tapahtumat;
}

class tapahtumat : public QWidget
{
    Q_OBJECT

public:
    explicit tapahtumat(QWidget *parent = nullptr);
    void setWebToken(const QByteArray &newWebToken);
    void setidasiakas(const QString &newidasiakas);
    void ReceiveTilitapahtumat();
    void linjastin();
    ~tapahtumat();

private slots:
    void on_tapa_button_takaisin_clicked();

private:
    Ui::tapahtumat *ui;
    RestApi_valmis *pRest;
    QString tilitapahtuma;
    QString idasiakas;
    QByteArray webtoken = "";
    QString sivu;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
private slots:
    void ReceiveTilitapahtumat(QNetworkReply *reply);
};

#endif // TAPAHTUMAT_H
