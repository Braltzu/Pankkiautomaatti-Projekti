/********************************************************************************
** Form generated from reading UI file 'debit.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBIT_H
#define UI_DEBIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_debit
{
public:
    QLabel *DB_label_otsikko;
    QLineEdit *DB_line_saldo;
    QLabel *DB_label_saldo;
    QPushButton *DB_button_takaisin;
    QPushButton *DB_button_nosto;

    void setupUi(QWidget *debit)
    {
        if (debit->objectName().isEmpty())
            debit->setObjectName("debit");
        debit->resize(400, 257);
        DB_label_otsikko = new QLabel(debit);
        DB_label_otsikko->setObjectName("DB_label_otsikko");
        DB_label_otsikko->setGeometry(QRect(100, 20, 191, 61));
        QFont font;
        font.setPointSize(20);
        DB_label_otsikko->setFont(font);
        DB_line_saldo = new QLineEdit(debit);
        DB_line_saldo->setObjectName("DB_line_saldo");
        DB_line_saldo->setGeometry(QRect(30, 100, 151, 31));
        DB_label_saldo = new QLabel(debit);
        DB_label_saldo->setObjectName("DB_label_saldo");
        DB_label_saldo->setGeometry(QRect(200, 100, 121, 31));
        QFont font1;
        font1.setPointSize(15);
        DB_label_saldo->setFont(font1);
        DB_button_takaisin = new QPushButton(debit);
        DB_button_takaisin->setObjectName("DB_button_takaisin");
        DB_button_takaisin->setGeometry(QRect(200, 160, 151, 61));
        DB_button_nosto = new QPushButton(debit);
        DB_button_nosto->setObjectName("DB_button_nosto");
        DB_button_nosto->setGeometry(QRect(30, 160, 151, 61));

        retranslateUi(debit);

        QMetaObject::connectSlotsByName(debit);
    } // setupUi

    void retranslateUi(QWidget *debit)
    {
        debit->setWindowTitle(QCoreApplication::translate("debit", "Form", nullptr));
        DB_label_otsikko->setText(QCoreApplication::translate("debit", "DEBIT TILINNE", nullptr));
        DB_label_saldo->setText(QCoreApplication::translate("debit", "DEBIT SALDO", nullptr));
        DB_button_takaisin->setText(QCoreApplication::translate("debit", "TAKAISIN", nullptr));
        DB_button_nosto->setText(QCoreApplication::translate("debit", "NOSTO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class debit: public Ui_debit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBIT_H
