#ifndef MUU_SUMMA_H
#define MUU_SUMMA_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {class muu_summa;}
QT_END_NAMESPACE

class muu_summa : public QWidget
{
    Q_OBJECT

public:
    explicit muu_summa(QWidget *parent = nullptr);
    ~muu_summa();

public slots:
    void on_takaisinButton_clicked();
    void on_no_line_maara_textChanged(const QString &arg1);
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
private:
    Ui::muu_summa *ui;
    int state=2;
    int MSnumber1;
    int button;
    void muu_summaClickHandler();
};

#endif // MUU_SUMMA_H
