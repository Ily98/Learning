TEMPLATE = app
CONFIG += console c++23
CONFIG -= app_bundle
CONFIG -= qt

#link to the new super cool libfmt
LIBS += -lfmt

SOURCES += \
        main.cpp
