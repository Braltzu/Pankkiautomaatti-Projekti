/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
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
    QPushButton *button_clear;
    QLineEdit *line_tunnus;
    QLineEdit *line_pin;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(440, 332);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_otsikko = new QLabel(centralwidget);
        label_otsikko->setObjectName("label_otsikko");
        label_otsikko->setGeometry(QRect(70, 50, 341, 51));
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
        button_clear = new QPushButton(centralwidget);
        button_clear->setObjectName("button_clear");
        button_clear->setGeometry(QRect(140, 260, 151, 51));
        button_clear->setFont(font1);
        line_tunnus = new QLineEdit(centralwidget);
        line_tunnus->setObjectName("line_tunnus");
        line_tunnus->setGeometry(QRect(140, 120, 151, 31));
        line_tunnus->setInputMethodHints(Qt::ImhNone);
        line_tunnus->setEchoMode(QLineEdit::Normal);
        line_pin = new QLineEdit(centralwidget);
        line_pin->setObjectName("line_pin");
        line_pin->setGeometry(QRect(140, 160, 151, 31));
        line_pin->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 160, 75, 31));
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
        button_clear->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Avaa PinUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
