QT -= gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11 console
CONFIG -= app_bundle
INCLUDEPATH = libraries/curl/include libraries/nlohmann/include
LIBS += -L libraries/curl/build/lib/ -lcurl

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
        main.cpp \
        mainwindow.cpp \ 
        loginwindow.cpp \ 
        logincontroller.cpp \
        account.cpp \
        FoodList.cpp \
        RequestHandler.cpp \
        RecipeList.cpp \
        Recipe.cpp \
        userpreferencewindow.cpp \
        AllergyList.cpp \
        CuisineList.cpp \
        DietList.cpp \
        FitnessPreferences.cpp \
        UserPreferencesController.cpp \
        calenderWindow.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    mainwindow.h \
    loginwindow.h \
    logincontroller.h \
    account.h \
    FoodList.h \
    RequestHandler.h \ 
    RecipeList.h \
    Recipe.h \
    userpreferencewindow.h \
    AllergyList.h \
    CuisineList.h \
    DietList.h \
    FitnessPreferences.h \
    UserPreferencesController.h \
    calenderWindow.h

