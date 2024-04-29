/********************************************************************************
** Form generated from reading UI file 'cr_nosto.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CR_NOSTO_H
#define UI_CR_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cr_nosto
{
public:
    QPushButton *crno_button_5;
    QPushButton *crno_button_10;
    QPushButton *crno_button_20;
    QPushButton *crno_button_200;
    QPushButton *crno_button_100;
    QPushButton *crno_button_50;
    QPushButton *crno_button_takaisin;
    QPushButton *crno_button_500;
    QLabel *label;

    void setupUi(QWidget *cr_nosto)
    {
        if (cr_nosto->objectName().isEmpty())
            cr_nosto->setObjectName("cr_nosto");
        cr_nosto->resize(365, 298);
        crno_button_5 = new QPushButton(cr_nosto);
        crno_button_5->setObjectName("crno_button_5");
        crno_button_5->setGeometry(QRect(40, 120, 80, 41));
        QFont font;
        font.setPointSize(15);
        crno_button_5->setFont(font);
        crno_button_10 = new QPushButton(cr_nosto);
        crno_button_10->setObjectName("crno_button_10");
        crno_button_10->setGeometry(QRect(140, 120, 80, 41));
        crno_button_10->setFont(font);
        crno_button_20 = new QPushButton(cr_nosto);
        crno_button_20->setObjectName("crno_button_20");
        crno_button_20->setGeometry(QRect(240, 120, 80, 41));
        crno_button_20->setFont(font);
        crno_button_200 = new QPushButton(cr_nosto);
        crno_button_200->setObjectName("crno_button_200");
        crno_button_200->setGeometry(QRect(240, 170, 80, 41));
        crno_button_200->setFont(font);
        crno_button_100 = new QPushButton(cr_nosto);
        crno_button_100->setObjectName("crno_button_100");
        crno_button_100->setGeometry(QRect(140, 170, 80, 41));
        crno_button_100->setFont(font);
        crno_button_50 = new QPushButton(cr_nosto);
        crno_button_50->setObjectName("crno_button_50");
        crno_button_50->setGeometry(QRect(40, 170, 80, 41));
        crno_button_50->setFont(font);
        crno_button_takaisin = new QPushButton(cr_nosto);
        crno_button_takaisin->setObjectName("crno_button_takaisin");
        crno_button_takaisin->setGeometry(QRect(139, 220, 181, 41));
        crno_button_takaisin->setFont(font);
        crno_button_500 = new QPushButton(cr_nosto);
        crno_button_500->setObjectName("crno_button_500");
        crno_button_500->setGeometry(QRect(40, 220, 80, 41));
        crno_button_500->setFont(font);
        label = new QLabel(cr_nosto);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 60, 251, 51));
        QFont font1;
        font1.setPointSize(25);
        label->setFont(font1);

        retranslateUi(cr_nosto);

        QMetaObject::connectSlotsByName(cr_nosto);
    } // setupUi

    void retranslateUi(QWidget *cr_nosto)
    {
        cr_nosto->setWindowTitle(QCoreApplication::translate("cr_nosto", "Form", nullptr));
        crno_button_5->setText(QCoreApplication::translate("cr_nosto", "5\342\202\254", nullptr));
        crno_button_10->setText(QCoreApplication::translate("cr_nosto", "10\342\202\254", nullptr));
        crno_button_20->setText(QCoreApplication::translate("cr_nosto", "20\342\202\254", nullptr));
        crno_button_200->setText(QCoreApplication::translate("cr_nosto", "200\342\202\254", nullptr));
        crno_button_100->setText(QCoreApplication::translate("cr_nosto", "100\342\202\254", nullptr));
        crno_button_50->setText(QCoreApplication::translate("cr_nosto", "50\342\202\254", nullptr));
        crno_button_takaisin->setText(QCoreApplication::translate("cr_nosto", "Takaisin", nullptr));
        crno_button_500->setText(QCoreApplication::translate("cr_nosto", "500\342\202\254", nullptr));
        label->setText(QCoreApplication::translate("cr_nosto", "Credit Nosto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cr_nosto: public Ui_cr_nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CR_NOSTO_H
