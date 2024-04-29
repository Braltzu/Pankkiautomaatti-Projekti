#ifndef TILITAPAHTUMATCREDIT_H
#define TILITAPAHTUMATCREDIT_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {class TilitapahtumatCredit;}
QT_END_NAMESPACE

class TilitapahtumatCredit : public QWidget
{
    Q_OBJECT

public:
    TilitapahtumatCredit(QWidget *parent = nullptr);
    ~TilitapahtumatCredit();

public slots:
    void on_takaisinButton_clicked();

private:
    Ui::TilitapahtumatCredit *ui;
};

#endif // TILITAPAHTUMATCREDIT_H
