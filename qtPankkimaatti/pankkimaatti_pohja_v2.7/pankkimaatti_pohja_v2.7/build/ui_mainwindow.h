/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_otsikko;
    QPushButton *button_kirjaudu;
    QLabel *mw_label_tunnus;
    QLabel *label_pin;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_8;
    QPushButton *button_7;
    QPushButton *button_9;
    QPushButton *button_clear;
    QPushButton *button_0;
    QLineEdit *line_tunnus;
    QLineEdit *line_pin;
    QPushButton *button_change;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(494, 499);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_otsikko = new QLabel(centralwidget);
        label_otsikko->setObjectName("label_otsikko");
        label_otsikko->setGeometry(QRect(120, 50, 341, 51));
        QFont font;
        font.setPointSize(20);
        label_otsikko->setFont(font);
        button_kirjaudu = new QPushButton(centralwidget);
        button_kirjaudu->setObjectName("button_kirjaudu");
        button_kirjaudu->setGeometry(QRect(140, 200, 151, 51));
        QFont font1;
        font1.setPointSize(15);
        button_kirjaudu->setFont(font1);
        mw_label_tunnus = new QLabel(centralwidget);
        mw_label_tunnus->setObjectName("mw_label_tunnus");
        mw_label_tunnus->setGeometry(QRect(300, 120, 91, 31));
        mw_label_tunnus->setFont(font1);
        label_pin = new QLabel(centralwidget);
        label_pin->setObjectName("label_pin");
        label_pin->setGeometry(QRect(300, 160, 91, 31));
        label_pin->setFont(font1);
        button_1 = new QPushButton(centralwidget);
        button_1->setObjectName("button_1");
        button_1->setGeometry(QRect(120, 300, 51, 51));
        button_2 = new QPushButton(centralwidget);
        button_2->setObjectName("button_2");
        button_2->setGeometry(QRect(180, 300, 51, 51));
        button_3 = new QPushButton(centralwidget);
        button_3->setObjectName("button_3");
        button_3->setGeometry(QRect(240, 300, 51, 51));
        button_4 = new QPushButton(centralwidget);
        button_4->setObjectName("button_4");
        button_4->setGeometry(QRect(120, 360, 51, 51));
        button_5 = new QPushButton(centralwidget);
        button_5->setObjectName("button_5");
        button_5->setGeometry(QRect(180, 360, 51, 51));
        button_6 = new QPushButton(centralwidget);
        button_6->setObjectName("button_6");
        button_6->setGeometry(QRect(240, 360, 51, 51));
        button_8 = new QPushButton(centralwidget);
        button_8->setObjectName("button_8");
        button_8->setGeometry(QRect(180, 420, 51, 51));
        button_7 = new QPushButton(centralwidget);
        button_7->setObjectName("button_7");
        button_7->setGeometry(QRect(120, 420, 51, 51));
        button_9 = new QPushButton(centralwidget);
        button_9->setObjectName("button_9");
        button_9->setGeometry(QRect(240, 420, 51, 51));
        button_clear = new QPushButton(centralwidget);
        button_clear->setObjectName("button_clear");
        button_clear->setGeometry(QRect(300, 300, 101, 51));
        button_0 = new QPushButton(centralwidget);
        button_0->setObjectName("button_0");
        button_0->setGeometry(QRect(300, 420, 51, 51));
        line_tunnus = new QLineEdit(centralwidget);
        line_tunnus->setObjectName("line_tunnus");
        line_tunnus->setGeometry(QRect(140, 120, 151, 31));
        line_pin = new QLineEdit(centralwidget);
        line_pin->setObjectName("line_pin");
        line_pin->setGeometry(QRect(140, 160, 151, 31));
        line_pin->setEchoMode(QLineEdit::Password);
        button_change = new QPushButton(centralwidget);
        button_change->setObjectName("button_change");
        button_change->setGeometry(QRect(300, 360, 101, 51));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 160, 75, 24));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_otsikko->setText(QCoreApplication::translate("MainWindow", "ANNA KIRJAUTUMISTIEDOT", nullptr));
        button_kirjaudu->setText(QCoreApplication::translate("MainWindow", "KIRJAUDU", nullptr));
        mw_label_tunnus->setText(QCoreApplication::translate("MainWindow", "TUNNUS", nullptr));
        label_pin->setText(QCoreApplication::translate("MainWindow", "PIN", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_change->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
