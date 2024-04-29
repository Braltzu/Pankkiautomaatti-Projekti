#ifndef NOSTO_H
#define NOSTO_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {class Nosto;}
QT_END_NAMESPACE

class Nosto : public QWidget
{
    Q_OBJECT

public:
    Nosto(QWidget *parent = nullptr);
    ~Nosto();

public slots:
    void on_muuSummaButton_clicked();
    void on_takaisinButton_clicked();
    void on_no_button_500_clicked();
    void on_no_button_200_clicked();
    void on_no_button_100_clicked();
    void on_no_button_50_clicked();
    void on_no_button_20_clicked();
    void on_no_button_10_clicked();
    void on_no_button_5_clicked();

private:
    Ui::Nosto *ui;
};

#endif // NOSTO_H
