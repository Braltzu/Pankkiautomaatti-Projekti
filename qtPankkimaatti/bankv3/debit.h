#ifndef DEBIT_H
#define DEBIT_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Debit; }
QT_END_NAMESPACE

class Debit : public QWidget
{
    Q_OBJECT

public:
    Debit(QWidget *parent = nullptr);

public slots:
    void on_nostoButton_clicked();
    void on_tilitapahtumatDebitButton_clicked();
    void on_takaisinButton_clicked();

private:
    Ui::Debit *ui;
};

#endif
