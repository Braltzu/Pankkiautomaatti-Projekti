#ifndef CR_NOSTO_H
#define CR_NOSTO_H

#include <QWidget>

namespace Ui {
class cr_nosto;
}

class cr_nosto : public QWidget
{
    Q_OBJECT

public:
    explicit cr_nosto(QWidget *parent = nullptr);
    ~cr_nosto();

private slots:
    void on_crno_button_5_clicked();

    void on_crno_button_10_clicked();

    void on_crno_button_20_clicked();

    void on_crno_button_50_clicked();

    void on_crno_button_100_clicked();

    void on_crno_button_200_clicked();

    void on_crno_button_500_clicked();

    void on_crno_button_takaisin_clicked();

private:
    Ui::cr_nosto *ui;
};

#endif // CR_NOSTO_H
