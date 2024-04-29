#include "cr_nosto.h"
#include "credit.h"
#include "ui_cr_nosto.h"

#include <QMessageBox>

cr_nosto::cr_nosto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cr_nosto)
{
    ui->setupUi(this);
}

cr_nosto::~cr_nosto()
{
    delete ui;
}

//credit nosto napit
//--------------------------------------------------
void cr_nosto::on_crno_button_takaisin_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("Takaisin."));
    Credit *CreditWindow =new Credit;
    CreditWindow->show();
    close();
}

//raha napit
//--------------------------------------------------
void cr_nosto::on_crno_button_5_clicked()
{


     QMessageBox::information(this, tr("ValintaBox"), tr("5€ nostettu"));
     Credit *CreditWindow =new Credit;
     CreditWindow->show();
     close();

}


void cr_nosto::on_crno_button_10_clicked()
{

    QMessageBox::information(this, tr("ValintaBox"), tr("10€ nostettu"));
    Credit *CreditWindow =new Credit;
    CreditWindow->show();
    close();
}


void cr_nosto::on_crno_button_20_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("20€ nostettu"));
    Credit *CreditWindow =new Credit;
    CreditWindow->show();
    close();
}


void cr_nosto::on_crno_button_50_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("50€ nostettu"));
    Credit *CreditWindow =new Credit;
    CreditWindow->show();
    close();
}


void cr_nosto::on_crno_button_100_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("100€ nostettu"));
    Credit *CreditWindow =new Credit;
    CreditWindow->show();
    close();
}


void cr_nosto::on_crno_button_200_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("200€ nostettu"));
    Credit *CreditWindow =new Credit;
    CreditWindow->show();
    close();
}


void cr_nosto::on_crno_button_500_clicked()
{
    QMessageBox::information(this, tr("ValintaBox"), tr("500€ nostettu"));
    Credit *CreditWindow =new Credit;
    CreditWindow->show();
    close();
}
//-----------------------------------------



