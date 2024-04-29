/********************************************************************************
** Form generated from reading UI file 'muu_summa.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUU_SUMMA_H
#define UI_MUU_SUMMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_muu_summa
{
public:
    QPushButton *no_button_9;
    QPushButton *no_button_5;
    QPushButton *no_button_8;
    QPushButton *no_button_4;
    QPushButton *no_button_2;
    QPushButton *no_button_3;
    QPushButton *no_button_7;
    QPushButton *no_button_1;
    QPushButton *no_button_6;
    QPushButton *no_button_BACK;
    QLineEdit *no_line_maara;
    QLabel *label;
    QPushButton *no_button_0;
    QPushButton *no_button_hyvaksy;
    QPushButton *no_button_takaisin;

    void setupUi(QWidget *muu_summa)
    {
        if (muu_summa->objectName().isEmpty())
            muu_summa->setObjectName("muu_summa");
        muu_summa->resize(388, 414);
        no_button_9 = new QPushButton(muu_summa);
        no_button_9->setObjectName("no_button_9");
        no_button_9->setGeometry(QRect(180, 290, 51, 51));
        no_button_5 = new QPushButton(muu_summa);
        no_button_5->setObjectName("no_button_5");
        no_button_5->setGeometry(QRect(120, 230, 51, 51));
        no_button_8 = new QPushButton(muu_summa);
        no_button_8->setObjectName("no_button_8");
        no_button_8->setGeometry(QRect(120, 290, 51, 51));
        no_button_4 = new QPushButton(muu_summa);
        no_button_4->setObjectName("no_button_4");
        no_button_4->setGeometry(QRect(60, 230, 51, 51));
        no_button_2 = new QPushButton(muu_summa);
        no_button_2->setObjectName("no_button_2");
        no_button_2->setGeometry(QRect(120, 170, 51, 51));
        no_button_3 = new QPushButton(muu_summa);
        no_button_3->setObjectName("no_button_3");
        no_button_3->setGeometry(QRect(180, 170, 51, 51));
        no_button_7 = new QPushButton(muu_summa);
        no_button_7->setObjectName("no_button_7");
        no_button_7->setGeometry(QRect(60, 290, 51, 51));
        no_button_1 = new QPushButton(muu_summa);
        no_button_1->setObjectName("no_button_1");
        no_button_1->setGeometry(QRect(60, 170, 51, 51));
        no_button_6 = new QPushButton(muu_summa);
        no_button_6->setObjectName("no_button_6");
        no_button_6->setGeometry(QRect(180, 230, 51, 51));
        no_button_BACK = new QPushButton(muu_summa);
        no_button_BACK->setObjectName("no_button_BACK");
        no_button_BACK->setGeometry(QRect(240, 170, 101, 51));
        no_line_maara = new QLineEdit(muu_summa);
        no_line_maara->setObjectName("no_line_maara");
        no_line_maara->setGeometry(QRect(60, 110, 241, 41));
        label = new QLabel(muu_summa);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 191, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        no_button_0 = new QPushButton(muu_summa);
        no_button_0->setObjectName("no_button_0");
        no_button_0->setGeometry(QRect(60, 350, 51, 51));
        no_button_hyvaksy = new QPushButton(muu_summa);
        no_button_hyvaksy->setObjectName("no_button_hyvaksy");
        no_button_hyvaksy->setGeometry(QRect(240, 230, 101, 51));
        no_button_takaisin = new QPushButton(muu_summa);
        no_button_takaisin->setObjectName("no_button_takaisin");
        no_button_takaisin->setGeometry(QRect(240, 290, 101, 51));

        retranslateUi(muu_summa);

        QMetaObject::connectSlotsByName(muu_summa);
    } // setupUi

    void retranslateUi(QWidget *muu_summa)
    {
        muu_summa->setWindowTitle(QCoreApplication::translate("muu_summa", "Form", nullptr));
        no_button_9->setText(QCoreApplication::translate("muu_summa", "9", nullptr));
        no_button_5->setText(QCoreApplication::translate("muu_summa", "5", nullptr));
        no_button_8->setText(QCoreApplication::translate("muu_summa", "8", nullptr));
        no_button_4->setText(QCoreApplication::translate("muu_summa", "4", nullptr));
        no_button_2->setText(QCoreApplication::translate("muu_summa", "2", nullptr));
        no_button_3->setText(QCoreApplication::translate("muu_summa", "3", nullptr));
        no_button_7->setText(QCoreApplication::translate("muu_summa", "7", nullptr));
        no_button_1->setText(QCoreApplication::translate("muu_summa", "1", nullptr));
        no_button_6->setText(QCoreApplication::translate("muu_summa", "6", nullptr));
        no_button_BACK->setText(QCoreApplication::translate("muu_summa", "BACK", nullptr));
        label->setText(QCoreApplication::translate("muu_summa", "MUU SUMMA", nullptr));
        no_button_0->setText(QCoreApplication::translate("muu_summa", "0", nullptr));
        no_button_hyvaksy->setText(QCoreApplication::translate("muu_summa", "HYV\303\204KSY", nullptr));
        no_button_takaisin->setText(QCoreApplication::translate("muu_summa", "TAKAISIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muu_summa: public Ui_muu_summa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUU_SUMMA_H
