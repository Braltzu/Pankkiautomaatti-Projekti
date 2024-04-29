#ifndef MUU_SUMMA_H
#define MUU_SUMMA_H

#include <QWidget>
#include "restapi_valmis.h"
namespace Ui {
class muu_summa;
}

class muu_summa : public QWidget
{
    Q_OBJECT

public:
    explicit muu_summa(QWidget *parent = nullptr);
    void setWebToken(const QByteArray &newWebToken);
    void setidasiakas(const QString &newidasiakas);
    QString idtili;
    QString idasiakas;
     QString nostomaara;
    QString credit;
    QString creditTilin;
    QString debitTilin;
    QString CreditLuottoraja;
    QString debitt;
    QByteArray webtoken;
    ~muu_summa();
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
    void on_no_line_maara_textChanged(const QString &arg1);

    void on_no_button_BACK_clicked();

    void on_no_button_1_clicked();

    void on_no_button_2_clicked();

    void on_no_button_3_clicked();

    void on_no_button_4_clicked();

    void on_no_button_5_clicked();

    void on_no_button_6_clicked();

    void on_no_button_7_clicked();

    void on_no_button_8_clicked();

    void on_no_button_9_clicked();

    void on_no_button_0_clicked();

    void on_no_button_hyvaksy_clicked();

    void on_no_button_takaisin_clicked();

private:
    Ui::muu_summa *ui;
    int state=2;
    int MSnumber1;
    int button;
    RestApi_valmis *aptr;
    //QByteArray webtoken;
    QNetworkReply *reply;
    //  QString idasiakas;
    QByteArray response_data;
    QNetworkAccessManager *getManager;
    QNetworkAccessManager *putManager;

    void muu_summaClickHandler();
    void MSbackbutton();
};

#endif // MUU_SUMMA_H
