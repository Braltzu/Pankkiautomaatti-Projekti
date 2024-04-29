/********************************************************************************
** Form generated from reading UI file 'tapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAPAHTUMAT_H
#define UI_TAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tapahtumat
{
public:
    QPushButton *tapa_button_takaisin;
    QLabel *tapa_label_otsikko;
    QTextEdit *tapa_textbox;
    QTextEdit *tapa_textbox_2;
    QTextEdit *tapa_textbox_3;
    QTextEdit *tapa_textbox_4;
    QTextEdit *tapa_textbox_5;

    void setupUi(QWidget *tapahtumat)
    {
        if (tapahtumat->objectName().isEmpty())
            tapahtumat->setObjectName("tapahtumat");
        tapahtumat->resize(563, 481);
        tapa_button_takaisin = new QPushButton(tapahtumat);
        tapa_button_takaisin->setObjectName("tapa_button_takaisin");
        tapa_button_takaisin->setGeometry(QRect(90, 320, 141, 61));
        tapa_label_otsikko = new QLabel(tapahtumat);
        tapa_label_otsikko->setObjectName("tapa_label_otsikko");
        tapa_label_otsikko->setGeometry(QRect(90, 40, 191, 61));
        QFont font;
        font.setPointSize(20);
        tapa_label_otsikko->setFont(font);
        tapa_textbox = new QTextEdit(tapahtumat);
        tapa_textbox->setObjectName("tapa_textbox");
        tapa_textbox->setGeometry(QRect(90, 120, 341, 31));
        tapa_textbox_2 = new QTextEdit(tapahtumat);
        tapa_textbox_2->setObjectName("tapa_textbox_2");
        tapa_textbox_2->setGeometry(QRect(90, 160, 341, 31));
        tapa_textbox_3 = new QTextEdit(tapahtumat);
        tapa_textbox_3->setObjectName("tapa_textbox_3");
        tapa_textbox_3->setGeometry(QRect(90, 200, 341, 31));
        tapa_textbox_4 = new QTextEdit(tapahtumat);
        tapa_textbox_4->setObjectName("tapa_textbox_4");
        tapa_textbox_4->setGeometry(QRect(90, 240, 341, 31));
        tapa_textbox_5 = new QTextEdit(tapahtumat);
        tapa_textbox_5->setObjectName("tapa_textbox_5");
        tapa_textbox_5->setGeometry(QRect(90, 280, 341, 31));

        retranslateUi(tapahtumat);

        QMetaObject::connectSlotsByName(tapahtumat);
    } // setupUi

    void retranslateUi(QWidget *tapahtumat)
    {
        tapahtumat->setWindowTitle(QCoreApplication::translate("tapahtumat", "Form", nullptr));
        tapa_button_takaisin->setText(QCoreApplication::translate("tapahtumat", "TAKAISIN", nullptr));
        tapa_label_otsikko->setText(QCoreApplication::translate("tapahtumat", "TAPAHTUMAT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tapahtumat: public Ui_tapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAPAHTUMAT_H
