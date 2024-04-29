#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include <QMainWindow>
#include "dialog.h"//pinui
#include "rfidcardreaderdll2.h"
#include "restapi_valmis.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void onSendString(const QString &num);//pinui


private slots:
    void on_line_tunnus_textChanged(const QString &arg1);

    void on_line_pin_textChanged(const QString &arg1);

    void on_button_kirjaudu_clicked();

    void on_button_clear_clicked();

    //lisäosat
    //-------------------------------------
    void showDialog();//pinui

    void ReceiveCardNum(QString); //RFID
    //-------------------------------------

private:
    Ui::MainWindow *ui;

    QDialog * ptr_dll;//pinui
    SerialPortReader * ptr_RFID; //RFID
    QString CardNum; //RFID  tähän tallentuu kortin nmr
};
#endif // MAINWINDOW_H
