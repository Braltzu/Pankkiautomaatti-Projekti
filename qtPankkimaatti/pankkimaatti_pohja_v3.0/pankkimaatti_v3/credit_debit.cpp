//------------------------------
#include "credit_debit.h"
#include "ui_credit_debit.h"
#include "credit.h"
#include "debit.h"
#include "tapahtumat.h"

//------------------------------
#include <QDebug>
#include <QString>
#include <QMessageBox>

credit_debit::credit_debit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::credit_debit)


{
    ui->setupUi(this);
}

credit_debit::~credit_debit()
{
    delete ui;
}

//NAPIT
//-------------------------------------------------------------------------
void credit_debit::on_CRDB_button_credit_clicked(){    //reitti credit osioon

    qDebug() <<"credit painettu";

    QMessageBox::information(this, tr("ValintaBox"), tr("Credit valittu."));
    Credit *CreditWindow =new Credit;
    CreditWindow->show();
    close();

}

void credit_debit::on_CRDB_button_debit_clicked(){      //debit osioon reitti
    qDebug() <<"debit painettu";

    QMessageBox::information(this, tr("ValintaBox"), tr("Debit valittu."));
    debit *debitWindow =new debit;
    debitWindow->show();
    close();

}

void credit_debit::on_CRDB_button_tapahtumat_clicked(){    //tilitapahtumiin reitti
    qDebug() <<"tilitapahtumat painettu";

    QMessageBox::information(this, tr("ValintaBox"), tr("Tilitapahtumat valittu."));
    tapahtumat *tapahtumatWindow =new tapahtumat;
    tapahtumatWindow->show();
    close();

}
//-----------------------------------------------------------------------------------
