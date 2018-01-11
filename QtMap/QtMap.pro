#-------------------------------------------------
#
# Project created by QtCreator 2017-11-22T19:46:22
#
#-------------------------------------------------

QT       += core gui
QT       += webkit

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtMap
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    config.cpp

HEADERS  += widget.h \
    config.h

FORMS    += widget.ui
