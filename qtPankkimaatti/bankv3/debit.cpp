#include "debit.h"
#include "ui_debit.h"
#include <QMessageBox>
#include "nosto.h"
#include "tilitapahtumatdebit.h"
#include "choosewindow.h"

Debit::Debit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Debit)
{
    ui->setupUi(this);
}

void Debit::on_nostoButton_clicked()
{
    Nosto *NostoWindow =new Nosto;
    NostoWindow->show();
    close();
};

void Debit::on_tilitapahtumatDebitButton_clicked()
{
    TilitapahtumatDebit *TilitapahtumatDebitWindow =new TilitapahtumatDebit;
    TilitapahtumatDebitWindow->show();
    close();
};

void Debit::on_takaisinButton_clicked()
{
    ChooseWindow *chooseWindow = new ChooseWindow;
    chooseWindow->show();
    close();
};
