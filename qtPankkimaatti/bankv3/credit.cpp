#include "credit.h"
#include "ui_credit.h"
#include <QMessageBox>
#include "nosto.h"
#include "tilitapahtumatCredit.h"
#include "choosewindow.h"

Credit::Credit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Credit)
{
    ui->setupUi(this);
}

void Credit::on_nostoButton_clicked()
{
    Nosto *NostoWindow =new Nosto;
    NostoWindow->show();
    close();
};

void Credit::on_tilitapahtumatCreditButton_clicked()
{
    TilitapahtumatCredit *TilitapahtumatCreditWindow =new TilitapahtumatCredit;
    TilitapahtumatCreditWindow->show();
    close();
};

void Credit::on_takaisinButton_clicked()
{
    ChooseWindow *chooseWindow = new ChooseWindow;
    chooseWindow->show();
    close();
};
