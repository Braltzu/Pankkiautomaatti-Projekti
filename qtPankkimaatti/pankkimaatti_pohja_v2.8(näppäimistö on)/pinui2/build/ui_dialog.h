/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLineEdit *lineEdit;
    QPushButton *pushButton_back;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 180, 31, 31));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 180, 31, 31));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(190, 180, 31, 31));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(110, 140, 31, 31));
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(150, 140, 31, 31));
        pushButton_6 = new QPushButton(Dialog);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(190, 140, 31, 31));
        pushButton_7 = new QPushButton(Dialog);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(110, 100, 31, 31));
        pushButton_8 = new QPushButton(Dialog);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(150, 100, 31, 31));
        pushButton_9 = new QPushButton(Dialog);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(190, 100, 31, 31));
        pushButton_10 = new QPushButton(Dialog);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(126, 220, 80, 18));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(110, 60, 113, 28));
        lineEdit->setMaxLength(4);
        lineEdit->setEchoMode(QLineEdit::Password);
        pushButton_back = new QPushButton(Dialog);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(230, 140, 31, 31));
        pushButton_ok = new QPushButton(Dialog);
        pushButton_ok->setObjectName("pushButton_ok");
        pushButton_ok->setGeometry(QRect(230, 100, 31, 31));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dialog", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Dialog", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Dialog", "9", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Dialog", "<-", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
