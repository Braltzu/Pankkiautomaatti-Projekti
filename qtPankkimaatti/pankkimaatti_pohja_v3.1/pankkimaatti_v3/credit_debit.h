#ifndef CREDIT_DEBIT_H
#define CREDIT_DEBIT_H

#include <QWidget>

namespace Ui {
class credit_debit;
}

class credit_debit : public QWidget
{
    Q_OBJECT

public:
    explicit credit_debit(QWidget *parent = nullptr);
    ~credit_debit();

private slots:
    void on_CRDB_button_credit_clicked();

    void on_CRDB_button_debit_clicked();

    void on_CRDB_button_tapahtumat_clicked();

private:
    Ui::credit_debit *ui;



};

#endif // CREDIT_DEBIT_H
