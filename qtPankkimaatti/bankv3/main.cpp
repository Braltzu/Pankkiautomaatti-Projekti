#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow window1;
    window1.setWindowTitle("Login");
    window1.show();
    return app.exec();
}

