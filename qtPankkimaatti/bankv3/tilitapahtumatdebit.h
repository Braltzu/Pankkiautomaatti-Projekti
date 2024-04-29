#ifndef TILITAPAHTUMATDEBIT_H
#define TILITAPAHTUMATDEBIT_H

#include <QWidget>
QT_BEGIN_NAMESPACE
namespace Ui {class TilitapahtumatDebit;}
QT_END_MOC_NAMESPACE

class TilitapahtumatDebit : public QWidget
{
    Q_OBJECT

public:
    TilitapahtumatDebit(QWidget *parent = nullptr);
    ~TilitapahtumatDebit();

public slots:
    void on_takaisinButton_clicked();

private:
    Ui::TilitapahtumatDebit *ui;
};

#endif // TILITAPAHTUMATDEBIT_H
