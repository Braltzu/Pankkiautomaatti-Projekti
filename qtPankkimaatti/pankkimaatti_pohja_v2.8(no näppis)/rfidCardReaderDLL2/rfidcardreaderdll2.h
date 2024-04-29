#ifndef RFIDCARDREADERDLL2_H
#define RFIDCARDREADERDLL2_H

#include "rfidCardReaderDLL2_global.h"
#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>

class SerialPortReader : public QObject
{
    Q_OBJECT

public:
    explicit SerialPortReader(QObject *parent = nullptr);
    ~SerialPortReader();

    void startReading();
    QString CheckCorrectport();

signals:
    void numberRead(QString num);

private slots:
    void readNumber();

private:
    QSerialPort *port;

};

#endif // RFIDCARDREADERDLL2_H
