# Dont' need Qt libs
QT -= core
QT -= gui


# Binary name
TARGET = part_006
# Console app
CONFIG += console
# Puts the executable into a bundle
CONFIG -= app_bundle
# This is an applications
TEMPLATE = app


# Create directories for temporrary files
OBJECTS_DIR     = tmp
MOC_DIR         = tmp


LIBS += -libsfml-audio
LIBS += -libsfml-graphics
LIBS += -libsfml-network
LIBS += -libsfml-window
LIBS += -libsfml-system

# Sources files
SOURCES += main.cpp

DISTFILES += \
    sfml-icon-small.png

LIBS += -L"$HOME/SFML/SFML-2.5.1/lib"

CONFIG(release, debug|release): LIBS += -libsfml-audio -libfml-graphics -libfml-network -libfml-window -libfml-system
CONFIG(debug, debug|release): LIBS += -libsfml-audio -libfml-graphics -libfml-network -libfml-window -libfml-system

INCLUDEPATH += "$HOME/SFML/SFML-master/include"
DEPENDPATH += "$HOME/SFML/SFML-master/include"
