#-------------------------------------------------
#
# Project created by QtCreator 2015-06-04T12:59:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = quiz_3_V
TEMPLATE = app


SOURCES += main.cpp\
    odpowiedz.cpp \
    pytanie.cpp \
    listapytan.cpp \
    glowne.cpp \
    plansza.cpp

HEADERS  += \
    odpowiedz.h \
    pytanie.h \
    listapytan.h \
    glowne.h \
    plansza.h

FORMS    += \
    glowne.ui \
    plansza.ui

RESOURCES += \
    z/zasoby.qrc
