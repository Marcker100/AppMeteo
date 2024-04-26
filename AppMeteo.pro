QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addWin.cpp \
    gestoreSensori.cpp \
    main.cpp \
    mainWindow.cpp \
    sensore.cpp \
    sensoreGrafico.cpp \
    sensorePolveri.cpp \
    sensorePressione.cpp \
    sensoreTemp.cpp \
    sensoreUmid.cpp \
    sensoreUv.cpp

HEADERS += \
    addWin.h \
    gestoreSensori.h \
    mainWindow.h \
    sensorVisitor.h \
    sensore.h \
    sensoreGrafico.h \
    sensorePolveri.h \
    sensorePressione.h \
    sensoreTemp.h \
    sensoreUmid.h \
    sensoreUv.h \
    sensoreVisitorConst.h

FORMS += \
    addWin.ui \
    mainWindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons/icons.qrc

