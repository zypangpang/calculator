#-------------------------------------------------
#
# Project created by QtCreator 2016-03-03T18:30:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = self-function
TEMPLATE = app


SOURCES += main.cpp\
        sdf_mainwindow.cpp \
    expressionfunc.cpp \
    variable.cpp

HEADERS  += sdf_mainwindow.h \
    expression.h \
    variable.h

FORMS    += sdf_mainwindow.ui
