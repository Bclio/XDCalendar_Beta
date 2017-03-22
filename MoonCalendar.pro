#-------------------------------------------------
#
# Project created by QtCreator 2017-02-04T10:02:510
#
#-------------------------------------------------
TEMPLATE = subdirs
CONFIG += ordered

SUBDIRS += \
        src\messagehandler \
        src\datamanager \
        src\settings \
        src\baseui \
        src\filemanager \
        src\datamanagerui \ #the gui realization of datamanager.
        src\plugins \
        src\app #app must at the end.

TRANSLATIONS += lang/MoonCalendar_en.ts lang/MoonCalendar_zh_CN.ts

