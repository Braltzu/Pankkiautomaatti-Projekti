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
    ~debit();

private slots:
    void ReceiveDebit(QByteArray);
    void on_DB_button_nosto_clicked();

    void on_DB_button_takaisin_clicked();

    void on_DB_line_saldo_textChanged(const QString &arg1);

private:
    Ui::debit *ui;
    RestApi_valmis *dptr;



};

#endif // DEBIT_H
