/********************************************************************************
** Form generated from reading UI file 'credit_debit.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_DEBIT_H
#define UI_CREDIT_DEBIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_credit_debit
{
public:
    QPushButton *CRDB_button_credit;
    QPushButton *CRDB_button_debit;
    QLabel *CR_label_otsikko;
    QPushButton *CRDB_button_tapahtumat;

    void setupUi(QWidget *credit_debit)
    {
        if (credit_debit->objectName().isEmpty())
            credit_debit->setObjectName("credit_debit");
        credit_debit->resize(370, 246);
        CRDB_button_credit = new QPushButton(credit_debit);
        CRDB_button_credit->setObjectName("CRDB_button_credit");
        CRDB_button_credit->setGeometry(QRect(50, 90, 131, 61));
        CRDB_button_debit = new QPushButton(credit_debit);
        CRDB_button_debit->setObjectName("CRDB_button_debit");
        CRDB_button_debit->setGeometry(QRect(190, 90, 131, 61));
        CR_label_otsikko = new QLabel(credit_debit);
        CR_label_otsikko->setObjectName("CR_label_otsikko");
        CR_label_otsikko->setGeometry(QRect(70, 20, 241, 61));
        QFont font;
        font.setPointSize(20);
        CR_label_otsikko->setFont(font);
        CRDB_button_tapahtumat = new QPushButton(credit_debit);
        CRDB_button_tapahtumat->setObjectName("CRDB_button_tapahtumat");
        CRDB_button_tapahtumat->setGeometry(QRect(80, 160, 211, 51));

        retranslateUi(credit_debit);

        QMetaObject::connectSlotsByName(credit_debit);
    } // setupUi

    void retranslateUi(QWidget *credit_debit)
    {
        credit_debit->setWindowTitle(QCoreApplication::translate("credit_debit", "Form", nullptr));
        CRDB_button_credit->setText(QCoreApplication::translate("credit_debit", "CREDIT", nullptr));
        CRDB_button_debit->setText(QCoreApplication::translate("credit_debit", "DEBIT", nullptr));
        CR_label_otsikko->setText(QCoreApplication::translate("credit_debit", "CREDIT OR DEBIT ?", nullptr));
        CRDB_button_tapahtumat->setText(QCoreApplication::translate("credit_debit", "TILITAPAHTUMAT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class credit_debit: public Ui_credit_debit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_DEBIT_H
