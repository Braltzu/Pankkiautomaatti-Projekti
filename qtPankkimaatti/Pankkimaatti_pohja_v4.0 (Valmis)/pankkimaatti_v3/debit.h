#ifndef DEBIT_H
#define DEBIT_H

#include <QWidget>
#include "restapi_valmis.h"
namespace Ui {
class debit;
}

class debit : public QWidget
{
    Q_OBJECT

public:
    explicit debit(QWidget *parent = nullptr);
    void setWebToken(const QByteArray &newWebToken);
    void setidasiakas(const QString &newidasiakas);
    QString idtili;
    QString idasiakas;
    QString credit;
    QString creditTilin;
    QByteArray webtoken;
    QString debitTilin;
    QString CreditLuottoraja;
    QString debitt;
    void rahat();
    ~debit();

private slots:
      void ReceiveDebit(QNetworkReply *reply);
    void on_DB_button_nosto_clicked();

    void on_DB_button_takaisin_clicked();

    void on_DB_line_saldo_textChanged(const QString &arg1);

private:
    Ui::debit *ui;
    QNetworkReply *reply;
    //  QString idasiakas;
    QByteArray response_data;
    QNetworkAccessManager *getManager;
    RestApi_valmis *dptr;



};

#endif // DEBIT_H
