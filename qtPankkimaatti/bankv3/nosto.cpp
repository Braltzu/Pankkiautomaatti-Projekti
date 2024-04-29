#include "nosto.h"
#include "ui_nosto.h"
#include "muu_summa.h"
#include <QMessageBox>
#include "choosewindow.h"
#include <QDebug>
Nosto::Nosto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);
}

Nosto::~Nosto()
{
    delete ui;
}

void Nosto::on_muuSummaButton_clicked()
{
    muu_summa *muu_summaWindow =new muu_summa;
    muu_summaWindow->show();
    close();
};

void Nosto::on_takaisinButton_clicked()
{
    ChooseWindow *chooseWindow = new ChooseWindow;
    chooseWindow->show();
    close();
};

void Nosto::on_no_button_500_clicked()
{QMessageBox::information(this, tr("ValintaBox"), tr("500€ summa valittu."));

}


void Nosto::on_no_button_200_clicked()
{QMessageBox::information(this, tr("ValintaBox"), tr("200€ summa valittu."));

}


void Nosto::on_no_button_100_clicked()
{QMessageBox::information(this, tr("ValintaBox"), tr("100€ summa valittu."));

}


void Nosto::on_no_button_50_clicked()
{QMessageBox::information(this, tr("ValintaBox"), tr("50€ summa valittu."));

}


void Nosto::on_no_button_20_clicked()
{QMessageBox::information(this, tr("ValintaBox"), tr("20€ summa valittu."));

}


void Nosto::on_no_button_10_clicked()
{QMessageBox::information(this, tr("ValintaBox"), tr("10€ summa valittu."));

}


void Nosto::on_no_button_5_clicked()
{QMessageBox::information(this, tr("ValintaBox"), tr("5€ summa valittu."));

}
