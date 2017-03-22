#-------------------------------------------------
#
# Project created by QtCreator 2017-02-04T10:51:51
#
#-------------------------------------------------
include(../src.pri)

QT  += core gui widgets

TEMPLATE = app

CONFIG(debug, debug|release){
    TARGET = MoonCalendarD
    DESTDIR = $$MOONCALENDAR_BUILD_ROOT_PATH/bin/debug
    LIBS += -L $$MOONCALENDAR_BUILD_ROOT_PATH/libs/debug -lQtSingleApplicationd

}else{
    TARGET = MoonCalendar
    DESTDIR = $$MOONCALENDAR_BUILD_ROOT_PATH/bin/release
    LIBS += -L $$MOONCALENDAR_BUILD_ROOT_PATH/libs/release -lQtSingleApplication
}

LIBS += -lmessagehandler

INCLUDEPATH += ../../include

FORMS += \
    mcmainwindow.ui

HEADERS += \
    mcmainwindow.h \
    singleclassobjectmanager.h

SOURCES += \
    mcmainwindow.cpp \
    main.cpp \
    singleclassobjectmanager.cpp
