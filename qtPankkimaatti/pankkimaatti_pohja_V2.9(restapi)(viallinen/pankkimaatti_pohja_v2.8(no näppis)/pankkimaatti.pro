QT       += core gui
QT       += serialport  #RFID
QT       += network #RestAPI

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
DEFINES += QT_NO_VERSION_TAGGING
CONFIG += c++17
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    credit.cpp \
    credit_debit.cpp \
    debit.cpp \
    main.cpp \
    mainwindow.cpp \
    muu_summa.cpp \
    nosto.cpp \
    tapahtumat.cpp

HEADERS += \
    credit.h \
    credit_debit.h \
    debit.h \
    mainwindow.h \
    muu_summa.h \
    nosto.h \
    tapahtumat.h

FORMS += \
    credit.ui \
    credit_debit.ui \
    debit.ui \
    mainwindow.ui \
    muu_summa.ui \
    nosto.ui \
    tapahtumat.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target




win32:CONFIG(release, debug|release): LIBS += -L$$PWD/pinui2/build/release/ -lpinui2
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/pinui2/build/debug/ -lpinui2

INCLUDEPATH += $$PWD/pinui2
DEPENDPATH += $$PWD/pinui2

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/rfidCardReaderDLL2/build/release/ -lrfidCardReaderDLL2
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/rfidCardReaderDLL2/build/debug/ -lrfidCardReaderDLL2

INCLUDEPATH += $$PWD/rfidCardReaderDLL2
DEPENDPATH += $$PWD/rfidCardReaderDLL2

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/restApi_valmis/build/release/ -lrestApi_valmis
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/restApi_valmis/build/debug/ -lrestApi_valmis

INCLUDEPATH += $$PWD/restApi_valmis
DEPENDPATH += $$PWD/restApi_valmis
