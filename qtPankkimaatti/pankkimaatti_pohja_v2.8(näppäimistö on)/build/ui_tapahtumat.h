/********************************************************************************
** Form generated from reading UI file 'tapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAPAHTUMAT_H
#define UI_TAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tapahtumat
{
public:
    QPushButton *tapa_button_takaisin;
    QLabel *tapa_label_otsikko;
    QLineEdit *tapa_line_tapahtumat;

    void setupUi(QWidget *tapahtumat)
    {
        if (tapahtumat->objectName().isEmpty())
            tapahtumat->setObjectName("tapahtumat");
        tapahtumat->resize(563, 481);
        tapa_button_takaisin = new QPushButton(tapahtumat);
        tapa_button_takaisin->setObjectName("tapa_button_takaisin");
        tapa_button_takaisin->setGeometry(QRect(90, 300, 141, 61));
        tapa_label_otsikko = new QLabel(tapahtumat);
        tapa_label_otsikko->setObjectName("tapa_label_otsikko");
        tapa_label_otsikko->setGeometry(QRect(160, 50, 191, 61));
        QFont font;
        font.setPointSize(20);
        tapa_label_otsikko->setFont(font);
        tapa_line_tapahtumat = new QLineEdit(tapahtumat);
        tapa_line_tapahtumat->setObjectName("tapa_line_tapahtumat");
        tapa_line_tapahtumat->setGeometry(QRect(90, 120, 361, 141));

        retranslateUi(tapahtumat);

        QMetaObject::connectSlotsByName(tapahtumat);
    } // setupUi

    void retranslateUi(QWidget *tapahtumat)
    {
        tapahtumat->setWindowTitle(QCoreApplication::translate("tapahtumat", "Form", nullptr));
        tapa_button_takaisin->setText(QCoreApplication::translate("tapahtumat", "TAKAISIN", nullptr));
        tapa_label_otsikko->setText(QCoreApplication::translate("tapahtumat", "TAPAHTUMAT", nullptr));
        tapa_line_tapahtumat->setText(QCoreApplication::translate("tapahtumat", "emt t\303\244nne jotaki", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tapahtumat: public Ui_tapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAPAHTUMAT_H
