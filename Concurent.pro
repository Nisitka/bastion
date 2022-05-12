QT       += core gui printsupport

QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arm.cpp \
    autorisatedialog.cpp \
    buildfunctiongroupdialog.cpp \
    buildksa.cpp \
    donutbreakdownchart.cpp \
    errorinfodialog.cpp \
    functiongroup.cpp \
    graphicdialog.cpp \
    importancefgdialog.cpp \
    ksa.cpp \
    ksagraphicdialog.cpp \
    loading.cpp \
    main.cpp \
    mainslice.cpp \
    menu.cpp \
    qcustomplot.cpp \
    updataarmdialog.cpp

HEADERS += \
    arm.h \
    autorisatedialog.h \
    buildfunctiongroupdialog.h \
    buildksa.h \
    donutbreakdownchart.h \
    errorinfodialog.h \
    functiongroup.h \
    graphicdialog.h \
    importancefgdialog.h \
    ksa.h \
    ksagraphicdialog.h \
    loading.h \
    mainslice.h \
    maxValue.h \
    menu.h \
    qcustomplot.h \
    ui_errorinfodialog.h \
    ui_graphicdialog.h \
    ui_graphicdialog.h \
    ui_loadingdialog.h \
    updataarmdialog.h

FORMS += \
    autorisatedialog.ui \
    buildfunctiongroupdialog.ui \
    buildksa.ui \
    errorinfodialog.ui \
    graphicdialog.ui \
    importancefgdialog.ui \
    ksagraphicdialog.ui \
    loading.ui \
    menu.ui \
    updataarmdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    pult (1).jpg

RESOURCES += \
    resourse.qrc
