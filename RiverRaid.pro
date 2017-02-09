#-------------------------------------------------
#
# Project created by QtCreator 2017-01-28T11:38:45
#
#-------------------------------------------------

QT       += core gui \
        multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RiverRaid
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp \
    Gmyjet.cpp \
    Lmyjet.cpp \
    Gbullet.cpp \
    Lbullet.cpp \
    Lenemyship.cpp \
    Genemyship.cpp \
    Genemyheli.cpp \
    Lenemyheli.cpp \
    Lenemyjet.cpp \
    Genemyjet.cpp \
    fuel.cpp \
    Lenemyballoon.cpp \
    Genemyballoon.cpp \
    score.cpp \
    globals.cpp \
    Gfueldepot.cpp \
    Lfueldepot.cpp \
    GameOver.cpp

HEADERS  += \
    Lmyjet.h \
    Gmyjet.h \
    Gbullet.h \
    Lbullet.h \
    Lenemyship.h \
    Genemyship.h \
    Lenemyheli.h \
    Genemyheli.h \
    Lenemyjet.h \
    Genemyjet.h \
    fuel.h \
    Lenemyballoon.h \
    Genemyballoon.h \
    score.h \
    globals.h \
    Gfueldepot.h \
    Lfueldepot.h \
    GameOver.h

RESOURCES += \
    res.qrc
