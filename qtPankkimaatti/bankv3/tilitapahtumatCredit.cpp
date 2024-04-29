#include "tilitapahtumatCredit.h"
#include "ui_tilitapahtumatCredit.h"
#include "credit.h"

TilitapahtumatCredit::TilitapahtumatCredit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TilitapahtumatCredit)
{
    ui->setupUi(this);
}

TilitapahtumatCredit::~TilitapahtumatCredit()
{
    delete ui;
}

void TilitapahtumatCredit::on_takaisinButton_clicked()
{
    Credit *creditWindow = new Credit;
    creditWindow->show();
    close();
};
