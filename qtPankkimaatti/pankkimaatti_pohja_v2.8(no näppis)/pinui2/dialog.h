#ifndef DIALOG_H
#define DIALOG_H

#include "pinui2_global.h"
#include <QDialog>

namespace Ui {
class Dialog;
}

class PINUI2_EXPORT Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

signals:
    //määrittää signaalin joka lähetetään mainwindowiin
    void sendString(const QString &num);

private slots:
    //nappulat
    void onNumberButtonClicked();
    void onOkButtonClicked();
    void onBackButtonClicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
