#-------------------------------------------------
#
# Project created by QtCreator 2017-02-06T10:36:51
#
#-------------------------------------------------
include(../../libs.pri)
include(../datamanager.pri)

QT += core
QT -= gui

TEMPLATE = lib
TARGET = datahandler

HEADERS += \
    datahandler_global.h \
    datahandler.h

DEFINES += DATAHANDLER_LIBRARY

SOURCES += \
    datahandler.cpp
