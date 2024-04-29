#include "muu_summa.h"
#include "ui_muu_summa.h"
#include "nosto.h"

muu_summa::muu_summa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::muu_summa)
{
    ui->setupUi(this);
    connect(ui->no_button_0,SIGNAL(clicked()), this, SLOT(muu_summaClickHandler()));       //numbers MASON WHAT DO THEY MEAN????
    connect(ui->no_button_1,SIGNAL(clicked()), this, SLOT(muu_summaClickHandler()));       //näppäimiä sitä nämä ovat
    connect(ui->no_button_2,SIGNAL(clicked()), this, SLOT(muu_summaClickHandler()));
    connect(ui->no_button_3,SIGNAL(clicked()), this, SLOT(muu_summaClickHandler()));
    connect(ui->no_button_4,SIGNAL(clicked()), this, SLOT(muu_summaClickHandler()));
    connect(ui->no_button_5,SIGNAL(clicked()), this, SLOT(muu_summaClickHandler()));
    connect(ui->no_button_6,SIGNAL(clicked()), this, SLOT(muu_summaClickHandler()));
    connect(ui->no_button_7,SIGNAL(clicked()), this, SLOT(muu_summaClickHandler()));
    connect(ui->no_button_8,SIGNAL(clicked()), this, SLOT(muu_summaClickHandler()));
    connect(ui->no_button_9,SIGNAL(clicked()), this, SLOT(muu_summaClickHandler()));
}

muu_summa::~muu_summa()
{
    delete ui;
}

void muu_summa::on_no_line_maara_textChanged(const QString &arg1)
{
    MSnumber1 = arg1.toFloat();
}
//-------------------------------------------------------

void muu_summa::muu_summaClickHandler()//ClickHandler funktio yhdistää näppäimet ja numerot näytälle myöhemmin
{
    QPushButton * button = (QPushButton*)sender();

    int MSnumeroese1;
    QString newb1;
    MSnumeroese1 = (ui->no_line_maara->text() + button->text()).toDouble();

    newb1 = QString::number(MSnumeroese1);    //numeroesen jälkeen tuleva koodin pätkä ", 'g',15);" tarkoittaa sitä kuinka monta numeroa voidaan laittaa boksiin ennen exponentiksi menemistä
        //jos sen jättää kokonaan pois on rajana 6 merkkiä mikä on jo tarpeeksi
    if (state==2){                          //säätelee kumpaan näyttöön laittaa numeroita state:lla 1 state=1 näyttö etc
        ui->no_line_maara->setText(newb1);
    }
}
void muu_summa::on_takaisinButton_clicked()
{
    Nosto *nostoWindow = new Nosto;
    nostoWindow->show();
    close();
};

void muu_summa::on_no_button_hyvaksy_clicked()
{

}

//numero näppäimet
//----------------------------------------------------
void muu_summa::on_no_button_0_clicked()
{
    muu_summaClickHandler();
    qDebug() << "num 0 pressed";
}


void muu_summa::on_no_button_1_clicked()
{
    muu_summaClickHandler();
    qDebug() << "num 1 pressed";
}


void muu_summa::on_no_button_2_clicked()
{
    muu_summaClickHandler();
    qDebug() << "num 2 pressed";
}


void muu_summa::on_no_button_3_clicked()
{
    muu_summaClickHandler();
    qDebug() << "num 3 pressed";
}


void muu_summa::on_no_button_4_clicked()
{
    muu_summaClickHandler();
    qDebug() << "num 4 pressed";
}


void muu_summa::on_no_button_5_clicked()
{
    muu_summaClickHandler();
    qDebug() << "num 5 pressed";
}


void muu_summa::on_no_button_6_clicked()
{
    muu_summaClickHandler();
    qDebug() << "num 6 pressed";
}


void muu_summa::on_no_button_7_clicked()
{
    muu_summaClickHandler();
    qDebug() << "num 7 pressed";
}


void muu_summa::on_no_button_8_clicked()
{
    muu_summaClickHandler();
    qDebug() << "num 8 pressed";
}


void muu_summa::on_no_button_9_clicked()
{
    muu_summaClickHandler();
    qDebug() << "num 9 pressed";
}
//----------------------------------------
