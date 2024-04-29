#ifndef TAPAHTUMAT_H
#define TAPAHTUMAT_H

#include <QWidget>
#include "restapi_valmis.h"
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
    RestApi_valmis *pRest;
private slots:
    void ReceiveTilitapahtumat(QByteArray);
};

#endif // TAPAHTUMAT_H
