//-----------------------
#include "credit.h"
#include "ui_credit.h"
#include "credit_debit.h"

//-----------------------
#include <QMessageBox>
#include <QString>

Credit::Credit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Credit)
{
    ui->setupUi(this);
}

Credit::~Credit()
{
    delete ui;
}

//Nappi takaisin suurin osa toiminnasta tehdään API:ssa
//--------------------------------------------------------------------------------
void Credit::on_CR_button_takaisin_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("Takaisin."));
    credit_debit *credit_debitWindow =new credit_debit;
    credit_debitWindow->show();
    close();
}
//--------------------------------------------------------------------------------
