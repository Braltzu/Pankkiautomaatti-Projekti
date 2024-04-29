#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include <QMainWindow>
#include "dialog.h"//pinui
#include "rfidcardreaderdll2.h"


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

    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

    void on_button_0_clicked();

    void on_button_change_clicked();

    //lisäosat
    //-------------------------------------
    void showDialog();//pinui

    void ReceiveCardNum(QString); //RFID
    //-------------------------------------

private:
    Ui::MainWindow *ui;

    void numberClick();
    void kirjauduButton();
    void clearButton();
    void changeButton();

    QString btnNum;         //mhadollisesti voi käyttää jos erikseen haluaa määrittää arvot num näppäimille, mutta ei ollut tarvetta
    float number1, number2; //tähän tallentuu näytöstä otetut luvut
    int button;

    int state; //määrittää kumpaan tauluun tulee numeroita


    Dialog * ptr_dll;//pinui
    SerialPortReader * ptr_RFID; //RFID
    QString CardNum; //RFID
};
#endif // MAINWINDOW_H
