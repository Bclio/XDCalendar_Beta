#-------------------------------------------------
#
# Project created by QtCreator 2017-02-06T10:36:51
#
#-------------------------------------------------
include(../src.pri)

QT += core
QT -= gui

TEMPLATE = lib
TARGET = messagehandler

DEFINES += MESSAGEHANDLER_LIBRARY

HEADERS += \
    messagehandler_global.h \
    imessagehandler.h \
    messagehandlermanager.h

SOURCES += \
    messagehandlermanager.cpp

