TEMPLATE = app

SOURCES = main.cpp
TARGET = ../helloworld
LIBS += ../lib/liblib.a

TARGETDEPS += ../lib/liblib.a

INCLUDEPATH += ../lib
