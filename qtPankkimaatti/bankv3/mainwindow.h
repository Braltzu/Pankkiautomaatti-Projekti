#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include <QMainWindow>

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
    void on_kirjauduButton_clicked();

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

private:
    Ui::MainWindow *ui;
    void numberClick();
    void clearButton();
    void changeButton();

    QString btnNum;         //mhadollisesti voi käyttää jos erikseen haluaa määrittää arvot num näppäimille, mutta ei ollut tarvetta
    float number1, number2; //tähän tallentuu näytöstä otetut luvut
    int button;

    int state =1;
    int state2 =2;
    int state3 =3;
};

#endif
