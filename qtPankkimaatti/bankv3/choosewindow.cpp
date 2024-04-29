#include "choosewindow.h"
#include "credit.h"
#include "ui_choosewindow.h"
#include <QMessageBox>
#include "debit.h"
#include "mainwindow.h"

ChooseWindow::ChooseWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChooseWindow)
{
    ui->setupUi(this);

}


ChooseWindow::~ChooseWindow()
{
    delete ui;
}

void ChooseWindow::on_creditButton_clicked()
{
    Credit *creditWindow =new Credit;
    creditWindow->show();
    close();
};

void ChooseWindow::on_debitButton_clicked()
{
    Debit *debitWindow =new Debit;
    debitWindow->show();
    close();
};

void ChooseWindow::on_takaisinButton_clicked()
{
    MainWindow *mainWindow = new MainWindow;
    mainWindow->show();
    close();
};
