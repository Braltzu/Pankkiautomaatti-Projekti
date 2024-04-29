//------------------------
#include "tapahtumat.h"
#include "ui_tapahtumat.h"
#include "credit_debit.h"
//------------------------
#include <QMessageBox>
//------------------------

tapahtumat::tapahtumat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tapahtumat)
{
    ui->setupUi(this);
}

tapahtumat::~tapahtumat()
{
    delete ui;
}

//simppeli takaisin nappi loput asiat tulevat suoraan API:sta
//------------------------------------------------
void tapahtumat::on_tapa_button_takaisin_clicked()
{
    QMessageBox::information(this, tr("valintaBox"), tr("Takaisin."));
    credit_debit *credit_debitWindow =new credit_debit;
    credit_debitWindow->show();
    close();
}
//-----------------------------------------------
