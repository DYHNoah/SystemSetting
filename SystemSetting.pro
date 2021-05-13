QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/Camera.cpp \
    src/CoreFunctionWidget.cpp \
    src/inifile.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/qreadini.cpp

HEADERS += \
    src/Camera.h \
    src/CoreFunctionWidget.h \
    src/inifile.h \
    src/mainwindow.h \
    src/make_unique.hpp \
    src/qreadini.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    SystemSetting_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image/image.qrc \
    shader/shader.qrc
