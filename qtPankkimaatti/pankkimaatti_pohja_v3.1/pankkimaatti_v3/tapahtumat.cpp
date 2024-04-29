//------------------------
#include "tapahtumat.h"
#include "ui_tapahtumat.h"
#include "credit_debit.h"
//------------------------
#include <QMessageBox>
#include <QCoreApplication>
//------------------------

tapahtumat::tapahtumat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tapahtumat)


{
    ui->setupUi(this);
    pRest=new RestApi_valmis(this);
    connect(pRest, SIGNAL(sendtilitapahtumatToexe(QByteArray)),this, SLOT(ReceiveTilitapahtumat(QByteArray)));
    pRest->tilitapahtumanetti();
}

tapahtumat::~tapahtumat()
{
    delete ui;
}

//Tilitapahtuman saaminen ja tiedoksi muuttaminen
//------------------------------------------------------------------------------------
void tapahtumat::ReceiveTilitapahtumat(QByteArray a){
    QString tilitapahtuma;

    QJsonDocument json_doc = QJsonDocument::fromJson(a);
    QJsonArray json_array = json_doc.array();

    //tämä tekee saadusta datasta tuetun ja halutussa muodossa
    //----------------------------------------------
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();

        tilitapahtuma+=QString::number(json_obj["id_tilitapahtumat"].toInt())+",    ";
        tilitapahtuma+=QString::number(json_obj["id_asiakas"].toInt())+",   ";
        tilitapahtuma+=QString::number(json_obj["amout"].toInt())+"€,   ";
        tilitapahtuma+=json_obj["DATE"].toString()+"\n";
    }
    //---------------------------------------------

    //tilitapahtumat printtaus
    //-------------------------------------------------------------------------------------
        //jakaa tilitapahtumat \n merkin jälkeen toiseen laatikkoon ja erittelee osioihin
    QString teksti =tilitapahtuma;

    QString ensimmainenOsio = teksti.section('\n', 0, 0);
    QString toinenOsio = teksti.section('\n', 1, 1);
    QString kolmasOsio = teksti.section('\n', 2, 2);
    QString neljasOsio = teksti.section('\n', 3, 3);
    QString viidesOsio = teksti.section('\n', 4, 4);
        //osiot käyvät läpi trimmed textin jotta DATE:n perästä lähtee turhat nollat pois
    QString trimmedText = ensimmainenOsio.left(ensimmainenOsio.length() - 14);
    QString trimmedText1 = toinenOsio.left(toinenOsio.length() - 14);
    QString trimmedText2 = kolmasOsio.left(kolmasOsio.length() - 14);
    QString trimmedText3 = neljasOsio.left(neljasOsio.length() - 14);
    QString trimmedText4 = viidesOsio.left(viidesOsio.length() - 14);
        //seuraavaksi printataan trimmed textit näytöille omiin laatikoihinsa
    ui->tapa_textbox->setPlainText(trimmedText);
    ui->tapa_textbox_2->setPlainText(trimmedText1);
    ui->tapa_textbox_3->setPlainText(trimmedText2);
    ui->tapa_textbox_4->setPlainText(trimmedText3);
    ui->tapa_textbox_5->setPlainText(trimmedText4);
    //-----------------------------------------------------------------------------------
}
//-------------------------------------------------------------------------------------------------


//simppeli takaisin nappi loput asiat tulevat suoraan API:sta
//------------------------------------------------
void tapahtumat::on_tapa_button_takaisin_clicked()
{
    QMessageBox::information(this, tr("valintaBox"), tr("Takaisin."));
    credit_debit *credit_debitWindow =new credit_debit;
    credit_debitWindow->show();
    close();
}
//-----------------------------------------------
