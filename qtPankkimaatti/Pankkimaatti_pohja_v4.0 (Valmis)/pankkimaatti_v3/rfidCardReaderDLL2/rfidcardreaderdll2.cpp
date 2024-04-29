#include "rfidcardreaderdll2.h"

#include <QSerialPortInfo>
#include <QDebug>

SerialPortReader::SerialPortReader(QObject *parent) : QObject(parent)
{
    port = new QSerialPort(this);
    connect(port, SIGNAL(readyRead()),
            this, SLOT(readNumber()));
}

SerialPortReader::~SerialPortReader()
{
    port->close();
    delete port;
}

void SerialPortReader::startReading()
{
    port->setPortName(CheckCorrectport());

    if(port->open(QIODevice::ReadWrite)){
        qDebug() <<"rör open";
    }
    else{
        qDebug() <<"ei toimi portti " <<port->errorString();
    }
}

void SerialPortReader::readNumber()
{

    QString num = port->readAll();

    //-----------------------------------------
    //trimmaa ylimääräiset merkit pois mitkä koodi voi luetella käskyiksi
    QString numTrim = num.mid(2, 10).trimmed();
    numTrim.replace("\r\n", ""); //kyseiset koodit
    //-----------------------------------------
    emit numberRead(numTrim); //lähettää trimmatun koodin eteenpäin
}

QString SerialPortReader::CheckCorrectport()
{
    QString ReturnValue ="";
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {

        qDebug() << "Name: " << info.portName();
        qDebug() << "SerialNumber: " << info.serialNumber();
        if (info.serialNumber() =="OL56E09005B8EBC"){
            ReturnValue=info.portName();
        }

    }
    return ReturnValue;
}

