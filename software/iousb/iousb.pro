#-------------------------------------------------
#
# Project created by QtCreator 2014-07-25T23:10:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = iousb
TEMPLATE = app

INCLUDEPATH +=/usr/local/include/libusb-1.0

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h\
        ../firmware/usbconfig.h

FORMS    += mainwindow.ui

LIBS += -lusb

