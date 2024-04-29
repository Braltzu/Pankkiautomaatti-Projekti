#include "tilitapahtumatdebit.h"
#include "ui_tilitapahtumatdebit.h"
#include "debit.h"

TilitapahtumatDebit::TilitapahtumatDebit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TilitapahtumatDebit)
{
    ui->setupUi(this);
}

TilitapahtumatDebit::~TilitapahtumatDebit()
{
    delete ui;
}

void TilitapahtumatDebit::on_takaisinButton_clicked()
{
    Debit *debitWindow = new Debit;
    debitWindow->show();
    close();
};
