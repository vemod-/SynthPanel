#-------------------------------------------------
#
# Project created by QtCreator 2013-08-29T01:08:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SynthPanel
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qsynthpanel.cpp

HEADERS  += mainwindow.h \
    qsynthpanel.h

FORMS    += mainwindow.ui

RESOURCES += \
    SynthPanelResources.qrc

OTHER_FILES += \
    QSynthPanel.pri
