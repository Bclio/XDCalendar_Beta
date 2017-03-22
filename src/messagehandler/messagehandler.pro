#-------------------------------------------------
#
# Project created by QtCreator 2017-02-06T10:36:51
#
#-------------------------------------------------
include(../libs.pri)

QT += core
QT -= gui

TEMPLATE = lib
TARGET = messagehandler

DEFINES += MESSAGEHANDLER_LIBRARY

HEADERS += \
    messagehandler_global.h \
    imessagehandler.h \
    messagehandlermanager.h \
    mooncalendarguimessagehandler.h \
    messagetype.h \
    filemanagermessagehandler.h \
    datahandlermessgehandler.h

SOURCES += \
    messagehandlermanager.cpp

