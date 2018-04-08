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
    compromisso.cpp \
    ldde.cpp \
    no.cpp \
    arquivo.cpp \
    fila.cpp \
    iterador.cpp \
    insercao.cpp \
    visualizacao.cpp \
    alteracao.cpp \
    exclusao.cpp \
    agenda.cpp

HEADERS  += agenda.h \
    compromisso.h \
    ldde.h \
    no.h \
    arquivo.h \
    fila.h \
    insercao.h \
    visualizacao.h \
    alteracao.h \
    exclusao.h

FORMS    += agenda.ui \
    insercao.ui \
    visualizacao.ui \
    alteracao.ui \
    exclusao.ui

RESOURCES += \
    imagens.qrc
