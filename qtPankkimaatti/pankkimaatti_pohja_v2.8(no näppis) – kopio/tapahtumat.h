#ifndef TAPAHTUMAT_H
#define TAPAHTUMAT_H

#include <QWidget>

namespace Ui {
class tapahtumat;
}

class tapahtumat : public QWidget
{
    Q_OBJECT

public:
    explicit tapahtumat(QWidget *parent = nullptr);
    ~tapahtumat();

private slots:
    void on_tapa_button_takaisin_clicked();

private:
    Ui::tapahtumat *ui;
};

#endif // TAPAHTUMAT_H
