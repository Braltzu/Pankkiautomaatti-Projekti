//------------------
#include "nosto.h"
#include "ui_nosto.h"
#include "muu_summa.h"
#include "debit.h"
//------------------
#include <QDebug>
#include <QMessageBox>

nosto::nosto(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::nosto)
{
    ui->setupUi(this);
}

nosto::~nosto()
{
    delete ui;
}


//spesiaali NiBBelit
//-----------------------------------------
void nosto::on_no_button_MS_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("Muu summa valittu."));
    muu_summa *muu_summaWindow =new muu_summa;
    muu_summaWindow->show();
    close();
}

void nosto::on_no_button_takaisin_clicked()
{
    QMessageBox::information(this, tr("valintaBox"), tr("takaisin."));
    debit *debitWindow =new debit;
    debitWindow->show();
    close();
}
//-----------------------------------------
//raha nosto NiBBelit
//-----------------------------------------
void nosto::on_no_button_500_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("500€ summa valittu."));

}


void nosto::on_no_button_200_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("200€ summa valittu."));

}


void nosto::on_no_button_100_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("100€ summa valittu."));

}


void nosto::on_no_button_50_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("50€ summa valittu."));

}


void nosto::on_no_button_20_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("20€ summa valittu."));

}


void nosto::on_no_button_10_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("10€ summa valittu."));

}


void nosto::on_no_button_5_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("5€ summa valittu."));

}
//-----------------------------------------



