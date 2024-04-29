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
    ~Credit();

private slots:
    void on_CR_button_takaisin_clicked();
        void ReceiveCredit(QByteArray);

private:
    Ui::Credit *ui;
        RestApi_valmis *pcRest;
};

#endif // CREDIT_H
