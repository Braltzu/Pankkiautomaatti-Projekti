#ifndef CREDIT_H
#define CREDIT_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Credit; }
QT_END_NAMESPACE

class Credit : public QWidget
{
    Q_OBJECT

public:
    Credit(QWidget *parent = nullptr);

public slots:
    void on_nostoButton_clicked();
    void on_tilitapahtumatCreditButton_clicked();
    void on_takaisinButton_clicked();

private:
    Ui::Credit *ui;
};

#endif
