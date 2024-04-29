#ifndef DEBIT_H
#define DEBIT_H

#include <QWidget>

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
    void on_DB_button_nosto_clicked();

    void on_DB_button_takaisin_clicked();

    void on_DB_line_saldo_textChanged(const QString &arg1);

private:
    Ui::debit *ui;


};

#endif // DEBIT_H
