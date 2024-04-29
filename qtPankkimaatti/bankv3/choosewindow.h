#ifndef CHOOSEWINDOW_H
#define CHOOSEWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ChooseWindow; }
QT_END_NAMESPACE

class ChooseWindow : public QWidget
{
    Q_OBJECT

public:
    ChooseWindow(QWidget *parent = nullptr);
    ~ChooseWindow();

public slots:
    void on_creditButton_clicked();
    void on_debitButton_clicked();
    void on_takaisinButton_clicked();

private:
    Ui::ChooseWindow *ui;
};

#endif
