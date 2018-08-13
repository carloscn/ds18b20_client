#-------------------------------------------------
#
# Project created by QtCreator 2018-07-22T15:13:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DS18B20_CLIENT
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    ds18b20.cpp \
    serialport.cpp

HEADERS  += widget.h \
    ds18b20.h \
    serialport.h

FORMS    += widget.ui
