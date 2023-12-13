QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    board.cpp \
    cell.cpp \
    dataexchange.cpp \
    king.cpp \
    loginui.cpp \
    main.cpp \
    mainui.cpp \
    piece.cpp

HEADERS += \
    adviser.h \
    algorithms.h \
    board.h \
    cannon.h \
    cell.h \
    dataexchange.h \
    elephant.h \
    horse.h \
    king.h \
    loginui.h \
    mainui.h \
    pawn.h \
    piece.h \
    rook.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
