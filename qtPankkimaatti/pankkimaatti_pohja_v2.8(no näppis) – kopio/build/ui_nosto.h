/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nosto
{
public:
    QLabel *no_label_otsikko;
    QLabel *no_label_emt;
    QPushButton *no_button_100;
    QPushButton *no_button_MS;
    QPushButton *no_button_50;
    QPushButton *no_button_10;
    QPushButton *no_button_20;
    QPushButton *no_button_500;
    QPushButton *no_button_5;
    QPushButton *no_button_200;
    QPushButton *no_button_takaisin;

    void setupUi(QWidget *nosto)
    {
        if (nosto->objectName().isEmpty())
            nosto->setObjectName("nosto");
        nosto->resize(553, 487);
        no_label_otsikko = new QLabel(nosto);
        no_label_otsikko->setObjectName("no_label_otsikko");
        no_label_otsikko->setGeometry(QRect(200, 70, 91, 81));
        QFont font;
        font.setPointSize(20);
        no_label_otsikko->setFont(font);
        no_label_emt = new QLabel(nosto);
        no_label_emt->setObjectName("no_label_emt");
        no_label_emt->setGeometry(QRect(80, 130, 211, 31));
        QFont font1;
        font1.setPointSize(15);
        no_label_emt->setFont(font1);
        no_button_100 = new QPushButton(nosto);
        no_button_100->setObjectName("no_button_100");
        no_button_100->setGeometry(QRect(180, 250, 91, 51));
        no_button_MS = new QPushButton(nosto);
        no_button_MS->setObjectName("no_button_MS");
        no_button_MS->setGeometry(QRect(180, 310, 191, 51));
        no_button_50 = new QPushButton(nosto);
        no_button_50->setObjectName("no_button_50");
        no_button_50->setGeometry(QRect(80, 250, 91, 51));
        no_button_10 = new QPushButton(nosto);
        no_button_10->setObjectName("no_button_10");
        no_button_10->setGeometry(QRect(180, 190, 91, 51));
        no_button_20 = new QPushButton(nosto);
        no_button_20->setObjectName("no_button_20");
        no_button_20->setGeometry(QRect(280, 190, 91, 51));
        no_button_500 = new QPushButton(nosto);
        no_button_500->setObjectName("no_button_500");
        no_button_500->setGeometry(QRect(80, 310, 91, 51));
        no_button_5 = new QPushButton(nosto);
        no_button_5->setObjectName("no_button_5");
        no_button_5->setGeometry(QRect(80, 190, 91, 51));
        no_button_200 = new QPushButton(nosto);
        no_button_200->setObjectName("no_button_200");
        no_button_200->setGeometry(QRect(280, 250, 91, 51));
        no_button_takaisin = new QPushButton(nosto);
        no_button_takaisin->setObjectName("no_button_takaisin");
        no_button_takaisin->setGeometry(QRect(80, 380, 121, 51));

        retranslateUi(nosto);

        QMetaObject::connectSlotsByName(nosto);
    } // setupUi

    void retranslateUi(QWidget *nosto)
    {
        nosto->setWindowTitle(QCoreApplication::translate("nosto", "Form", nullptr));
        no_label_otsikko->setText(QCoreApplication::translate("nosto", "NOSTO", nullptr));
        no_label_emt->setText(QCoreApplication::translate("nosto", "Paljonko haluat nostaa?", nullptr));
        no_button_100->setText(QCoreApplication::translate("nosto", "100\342\202\254", nullptr));
        no_button_MS->setText(QCoreApplication::translate("nosto", "MUU SUMMA", nullptr));
        no_button_50->setText(QCoreApplication::translate("nosto", "50\342\202\254", nullptr));
        no_button_10->setText(QCoreApplication::translate("nosto", "10\342\202\254", nullptr));
        no_button_20->setText(QCoreApplication::translate("nosto", "20\342\202\254", nullptr));
        no_button_500->setText(QCoreApplication::translate("nosto", "500\342\202\254", nullptr));
        no_button_5->setText(QCoreApplication::translate("nosto", "5\342\202\254", nullptr));
        no_button_200->setText(QCoreApplication::translate("nosto", "200\342\202\254", nullptr));
        no_button_takaisin->setText(QCoreApplication::translate("nosto", "TAKAISIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nosto: public Ui_nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
