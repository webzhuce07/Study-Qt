#**********************************************************************
#
#  Copyright (c) Mr.Bin. All rights reserved.
#  For more information visit: http://blog.csdn.net/webzhuce 
#
#**********************************************************************
QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = MyQQExample
TEMPLATE = app
SOURCES += main.cpp\
           mainwindow.cpp\
           drawer.cpp
HEADERS += drawer.h\
           mainwindow.h

RESOURCES += \
    resource.qrc
