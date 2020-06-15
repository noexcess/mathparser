TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Interpreter/functionexpression.cpp \
    Interpreter/BaseFunction/basefunction.cpp \
    Interpreter/BaseFunction/cosfunction.cpp \
    Interpreter/BaseFunction/sinfunction.cpp \
    Interpreter/functionmap.cpp \
    Interpreter/BaseFunction/addfunction.cpp \
    Interpreter/BaseFunction/multfunction.cpp \
    Interpreter/BaseFunction/powerfunction.cpp \
    Interpreter/parserstate.cpp \
    Interpreter/initstate.cpp \
    Interpreter/parsercontext.cpp \
    Interpreter/funcstate.cpp \
    Interpreter/coefstate.cpp \
    Interpreter/BaseFunction/divfunction.cpp \
    Interpreter/BaseFunction/bracketsfunction.cpp \
    Interpreter/parser.cpp \
    Interpreter/BaseFunction/coeffunction.cpp

HEADERS += \
    Interpreter/functionexpression.h \
    Interpreter/BaseFunction/basefunction.h \
    Interpreter/BaseFunction/cosfunction.h \
    Interpreter/BaseFunction/sinfunction.h \
    Interpreter/functionmap.h \
    Interpreter/BaseFunction/addfunction.h \
    Interpreter/BaseFunction/multfunction.h \
    Interpreter/BaseFunction/powerfunction.h \
    Interpreter/parserstate.h \
    Interpreter/initstate.h \
    Interpreter/parsercontext.h \
    Interpreter/funcstate.h \
    Interpreter/coefstate.h \
    Interpreter/BaseFunction/divfunction.h \
    Interpreter/BaseFunction/bracketsfunction.h \
    Interpreter/iexpression.h \
    Interpreter/parser.h \
    Interpreter/BaseFunction/coeffunction.h
