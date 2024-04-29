#ifndef CREDIT_DEBIT_H
#define CREDIT_DEBIT_H

#include <QWidget>
#include "restapi_valmis.h"
namespace Ui {
class credit_debit;
}

class credit_debit : public QWidget
{
    Q_OBJECT

public:
    explicit credit_debit(QWidget *parent = nullptr);
    void setWebToken(const QByteArray &newWebToken);
    QString naa;
    void setidasiakas(const QString &newidasiakas);
    void idtoteutin();
    ~credit_debit();

private slots:
    void asiakasid(QNetworkReply *reply);
    void on_CRDB_button_credit_clicked();

    void on_CRDB_button_debit_clicked();

    void on_CRDB_button_tapahtumat_clicked();

private:
    Ui::credit_debit *ui;
    QString site;
    QString idasiakas;
    QString asiakkaanid;
    QByteArray webtoken;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;


};

#endif // CREDIT_DEBIT_H
