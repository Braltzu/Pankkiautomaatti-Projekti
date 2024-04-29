//.h tiedostot
//------------------
#include "debit.h"
#include "ui_debit.h"
#include "nosto.h"
#include "credit_debit.h"
//------------------
//erilliset tarvittavat
#include <QDebug>
#include <QString>
#include <QMessageBox>
//------------------

debit::debit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::debit)
{
    ui->setupUi(this);
}

debit::~debit()
{
    delete ui;
}


//näyttö säädöt tulevat RestAPI:n kautta
//-----------------------------------------------------------
void debit::on_DB_line_saldo_textChanged(const QString &arg1)
{
}
//-----------------------------------------------------------

//buttons
//-------------------------------------------------
void debit::on_DB_button_nosto_clicked()
{
    qDebug() << "nosto pressed";

    QMessageBox::information(this, tr("ValintaBox"), tr("Nosto valittu."));
    nosto *nostoWindow =new nosto;
    nostoWindow->show();
    close();
}


void debit::on_DB_button_takaisin_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("Takaisin."));
    credit_debit *credit_debitWindow =new credit_debit;
    credit_debitWindow->show();
    close();
}
//-------------------------------------------------


