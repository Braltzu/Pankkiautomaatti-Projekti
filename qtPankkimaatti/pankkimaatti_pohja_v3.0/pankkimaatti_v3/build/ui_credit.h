/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QLabel *CR_label_otsikko;
    QLineEdit *CR_line_saldo;
    QLineEdit *CR_line_luottoraja;
    QLabel *CR_label_saldo;
    QLabel *CR_label_luottoraja;
    QPushButton *CR_button_takaisin;

    void setupUi(QWidget *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName("Credit");
        Credit->resize(388, 314);
        CR_label_otsikko = new QLabel(Credit);
        CR_label_otsikko->setObjectName("CR_label_otsikko");
        CR_label_otsikko->setGeometry(QRect(50, 20, 231, 91));
        QFont font;
        font.setPointSize(20);
        CR_label_otsikko->setFont(font);
        CR_line_saldo = new QLineEdit(Credit);
        CR_line_saldo->setObjectName("CR_line_saldo");
        CR_line_saldo->setGeometry(QRect(50, 110, 121, 31));
        CR_line_luottoraja = new QLineEdit(Credit);
        CR_line_luottoraja->setObjectName("CR_line_luottoraja");
        CR_line_luottoraja->setGeometry(QRect(50, 150, 121, 31));
        CR_label_saldo = new QLabel(Credit);
        CR_label_saldo->setObjectName("CR_label_saldo");
        CR_label_saldo->setGeometry(QRect(190, 110, 161, 21));
        QFont font1;
        font1.setPointSize(15);
        CR_label_saldo->setFont(font1);
        CR_label_luottoraja = new QLabel(Credit);
        CR_label_luottoraja->setObjectName("CR_label_luottoraja");
        CR_label_luottoraja->setGeometry(QRect(190, 150, 171, 21));
        CR_label_luottoraja->setFont(font1);
        CR_button_takaisin = new QPushButton(Credit);
        CR_button_takaisin->setObjectName("CR_button_takaisin");
        CR_button_takaisin->setGeometry(QRect(50, 190, 181, 61));
        CR_button_takaisin->setFont(font1);

        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QWidget *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "Form", nullptr));
        CR_label_otsikko->setText(QCoreApplication::translate("Credit", "CREDIT TILINNE", nullptr));
        CR_label_saldo->setText(QCoreApplication::translate("Credit", "CREDIT SALDO", nullptr));
        CR_label_luottoraja->setText(QCoreApplication::translate("Credit", "LUOTTORAJA", nullptr));
        CR_button_takaisin->setText(QCoreApplication::translate("Credit", "TAKAISIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
