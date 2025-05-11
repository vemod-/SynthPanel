!contains(PROFILES,$$_FILE_){
PROFILES+=$$_FILE_

INCLUDEPATH += $$PWD

HEADERS += $$PWD/qsynthpanel.h

SOURCES += $$PWD/qsynthpanel.cpp

RESOURCES += $$PWD/SynthPanelResources.qrc
}
