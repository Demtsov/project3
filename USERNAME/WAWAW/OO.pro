QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../sspp/sspravkapol.cpp \
    main.cpp \
    glavnoeokno.cpp \
    otchet.cpp \
    spravka.cpp \
    sprpolzovat.cpp

HEADERS += \
    ../sspp/sspravkapol.h \
    glavnoeokno.h \
    otchet.h \
    spravka.h \
    sprpolzovat.h

FORMS += \
    ../sspp/sspravkapol.ui \
    glavnoeokno.ui \
    otchet.ui \
    spravka.ui \
    sprpolzovat.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    kartinki.qrc

DISTFILES += \
    img/X4pma3QOHS0.jpg \
    img/_MyJ83-DDEM.jpg

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../sspp/release/ -lsspp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../sspp/debug/ -lsspp
else:unix: LIBS += -L$$OUT_PWD/../sspp/ -lsspp

INCLUDEPATH += $$PWD/../sspp
DEPENDPATH += $$PWD/../sspp
