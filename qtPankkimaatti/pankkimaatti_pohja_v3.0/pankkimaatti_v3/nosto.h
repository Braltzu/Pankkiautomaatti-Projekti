#ifndef NOSTO_H
#define NOSTO_H

#include <QWidget>

namespace Ui {
class nosto;
}

class nosto : public QWidget
{
    Q_OBJECT

public:
    explicit nosto(QWidget *parent = nullptr);
    ~nosto();

private slots:
    void on_no_button_MS_clicked();

    void on_no_button_500_clicked();

    void on_no_button_200_clicked();

    void on_no_button_100_clicked();

    void on_no_button_50_clicked();

    void on_no_button_20_clicked();

    void on_no_button_10_clicked();

    void on_no_button_5_clicked();

    void on_no_button_takaisin_clicked();

private:
    Ui::nosto *ui;


};

#endif // NOSTO_H
