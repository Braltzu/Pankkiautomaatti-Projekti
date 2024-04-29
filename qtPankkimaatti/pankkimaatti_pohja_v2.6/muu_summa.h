#ifndef MUU_SUMMA_H
#define MUU_SUMMA_H

#include <QWidget>

namespace Ui {
class muu_summa;
}

class muu_summa : public QWidget
{
    Q_OBJECT

public:
    explicit muu_summa(QWidget *parent = nullptr);
    ~muu_summa();

private slots:
    void on_no_line_maara_textChanged(const QString &arg1);

    void on_no_button_BACK_clicked();

    void on_no_button_1_clicked();

    void on_no_button_2_clicked();

    void on_no_button_3_clicked();

    void on_no_button_4_clicked();

    void on_no_button_5_clicked();

    void on_no_button_6_clicked();

    void on_no_button_7_clicked();

    void on_no_button_8_clicked();

    void on_no_button_9_clicked();

    void on_no_button_0_clicked();

    void on_no_button_hyvaksy_clicked();

    void on_no_button_takaisin_clicked();

private:
    Ui::muu_summa *ui;
    int state=2;
    int MSnumber1;
    int button;
    void muu_summaClickHandler();
    void MSbackbutton();
};

#endif // MUU_SUMMA_H
