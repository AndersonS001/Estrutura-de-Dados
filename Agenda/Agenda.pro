#-------------------------------------------------
#
# Project created by QtCreator 2018-03-19T14:42:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Agenda
TEMPLATE = app


SOURCES += main.cpp\
        agenda.cpp \
    compromisso.cpp \
    ldde.cpp \
    no.cpp

HEADERS  += agenda.h \
    compromisso.h \
    ldde.h \
    no.h

FORMS    += agenda.ui