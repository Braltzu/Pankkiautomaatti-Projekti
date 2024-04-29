//-----------------------
#include "muu_summa.h"
#include "ui_muu_summa.h"
#include "nosto.h"
//-----------------------
using namespace std;
#include <QMessageBox>
#include <QString>
#include <QDebug>
//-----------------------

muu_summa::muu_summa(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::muu_summa)


//--------------------------------------------------------------------------------------------
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

    connect(ui->no_button_BACK,SIGNAL(clicked()), this, SLOT(MSbackbutton()));
}
//--------------------------------------------------------------------------------------------

muu_summa::~muu_summa()
{
    delete ui;
}

void muu_summa::prepareUpdate() {
    // Call update function here, ensuring data is ready
    receiveupdateasiak();
    addtilitapahtuma();
}
void muu_summa::setidasiakas(const QString &newidasiakas){
    idasiakas=newidasiakas;
}

void muu_summa::setWebToken(const QByteArray &newWebToken){
    webtoken=newWebToken;
}

//näyttö
//-------------------------------------------------------
void muu_summa::on_no_line_maara_textChanged(const QString &arg1)
{
    MSnumber1 = arg1.toFloat();
}
//-------------------------------------------------------


//Clickhandler
//-------------------------------------------------------
void muu_summa::muu_summaClickHandler()//ClickHandler funktio yhdistää näppäimet ja numerot näytälle myöhemmin
{
    QPushButton * button = (QPushButton*)sender();

    double MSnumeroese1;
    QString newb1;
    MSnumeroese1 = (ui->no_line_maara->text() + button->text()).toDouble();

    newb1 = QString::number(MSnumeroese1);  //numeroesen jälkeen tuleva koodin pätkä ", 'g',15);" tarkoittaa sitä kuinka monta numeroa voidaan laittaa boksiin ennen exponentiksi menemistä
                                            //jos sen jättää kokonaan pois on rajana 6 merkkiä mikä on jo tarpeeksi
    if (state==2){                          //säätelee kumpaan näyttöön laittaa numeroita state:lla 1 state=1 näyttö etc
        ui->no_line_maara->setText(newb1);
}
}
//-------------------------------------------------------


//speshal niBBel
//---------------------------------------------
void muu_summa::on_no_button_BACK_clicked()     //poistaa edellisen kirjaimen/numeron
{

}

void muu_summa::on_no_button_takaisin_clicked() //yksi sivu taakseppäin
{
    QMessageBox::information(this, tr("valintaBox"), tr("takaisin."));
    nosto *nostoWindow =new nosto;
    nostoWindow->show();
    close();

}

void muu_summa::on_no_button_hyvaksy_clicked()
{//tehdäänkö valinta ja poistuminen tähän exe:een vaiko apiin?
    prepareUpdate();
    receiveupdateasiak();
}
//---------------------------------------------


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



void muu_summa::gettili(QNetworkReply *reply){
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    qDebug()<<response_data;
    idtili.clear();
    idasiakas.clear();
    debitt.clear();
    credit.clear();
    creditTilin.clear();
    debitTilin.clear();
    CreditLuottoraja.clear();
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        // debitsaldo+=QString::number(json_obj["debitsaldo"].toInt())+"\r";
        debitt+=QString::number(json_obj["debitsaldo"].toInt())+" ";
        idtili+=QString::number(json_obj["id_tili"].toInt())+" ";
        qDebug()<<"tili id haettaessa "+idtili;
        idasiakas+=QString::number(json_obj["id_asiakas"].toInt())+" ";
        credit+=QString::number(json_obj["credit_saldo"].toInt())+" ";
        creditTilin+=json_obj["creditTilinumero"].toString()+" ";
        debitTilin+=json_obj["debitTilinumero"].toString()+" ";
        CreditLuottoraja+=QString::number(json_obj["creditLuottoraja"].toInt())+" ";
        emit dataReady();
    }
}

void muu_summa::gettilitys(QNetworkReply *reply){
    response_data =reply->readAll();
    qDebug()<<"mitä pitäisi tapahtua";
    qDebug()<<response_data;
    reply->deleteLater();
    putManager->deleteLater();
}

void muu_summa::nostot(){
    qDebug()<<"haetaan asiakkaan tilitiedot";
    QString site_url="http://localhost:3000/tili/"+idasiakas;
    qDebug()<<site_url;
    QNetworkRequest request((site_url));
    QByteArray myToken="Bearer "+webtoken;
    qDebug()<<myToken;
    request.setRawHeader(QByteArray("Authorization"),(myToken));
    qDebug()<<"webtoken nostoissa "+webtoken;
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(gettili(QNetworkReply*)));
    reply=getManager->get(request);
}

void muu_summa::receiveupdateasiak(){
    if (idtili.isEmpty()) {
        qDebug() << "Error: idtili is empty";
        return;
    }
    nostomaara=ui->no_line_maara->text();
    int debittInt = debitt.toInt(); // assuming 'debitt' can be safely converted to an integer
    int nostomaaraInt = nostomaara.toInt(); // same assumption for 'nostomaara'
    int updatedDebitsaldo = debittInt - nostomaaraInt;
    if(updatedDebitsaldo>0){
    QJsonObject jsonObj;
    jsonObj.insert("id_asiakas", idasiakas);
    jsonObj.insert("debitsaldo", QString::number(updatedDebitsaldo));  // Example value
    jsonObj.insert("credit_saldo", credit);
    jsonObj.insert("creditTilinumero", creditTilin);
    jsonObj.insert("debitTilinumero", debitTilin);
    jsonObj.insert("creditLuottoraja", CreditLuottoraja);

    QString site_url = "http://localhost:3000/tili/" + idtili.trimmed();
    qDebug() << "PUT URL:" << site_url;

    QNetworkRequest request(site_url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray myToken = "Bearer " + webtoken;
    request.setRawHeader("Authorization", myToken);

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(gettilitys(QNetworkReply*)));
    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());
    }
    else
    {
    QMessageBox msgbox;
    msgbox.setText("tili olisi menossa miinukselle");
    msgbox.exec();
    }
}

void muu_summa::addtili(QNetworkReply *reply){
    response_data =reply->readAll();
    qDebug()<<"mitä pitäisi tapahtua";
    qDebug()<<response_data;
    reply->deleteLater();
    putManager->deleteLater();
}

void muu_summa::addtilitapahtuma(){
    QDate currentDate = QDate::currentDate();
    QString dateString = currentDate.toString(Qt::ISODate);
    QJsonObject jsonObj;
    jsonObj.insert("id_asiakas", idasiakas);
    jsonObj.insert("amout", "-"+nostomaara);  // Example value
    jsonObj.insert("DATE", dateString);


    QString site_url = "http://localhost:3000/tilitapahtumat/";
    qDebug() << "PUT URL:" << site_url;

    QNetworkRequest request(site_url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray myToken = "Bearer " + webtoken;
    request.setRawHeader("Authorization", myToken);
    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(addtili(QNetworkReply*)));
    reply = putManager->post(request, QJsonDocument(jsonObj).toJson());
}


//----------------------------------------






