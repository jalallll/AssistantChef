#############################################################################
# Makefile for building: GUI
# Generated by qmake (3.1) (Qt 5.15.2)
# Project:  GUI.pro
# Template: app
# Command: /usr/bin/qmake-qt5 -o Makefile GUI.pro
#############################################################################

MAKEFILE      = Makefile

EQ            = =

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_DEPRECATED_WARNINGS -DQT_NO_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -O2 -Wall -Wextra -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -pipe -O2 -std=gnu++11 -Wall -Wextra -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I. -Ilibraries/curl/include -Ilibraries/nlohmann/include -I/usr/include/qt5 -I/usr/include/qt5/QtWidgets -I/usr/include/qt5/QtGui -I/usr/include/qt5/QtCore -I. -I/../lib64/qt5/mkspecs/linux-g++
QMAKE         = /usr/bin/qmake-qt5
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
QINSTALL      = /usr/bin/qmake-qt5 -install qinstall
QINSTALL_PROGRAM = /usr/bin/qmake-qt5 -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = GUI1.0.0
DISTDIR = /home/jquresh3/group12/.tmp/GUI1.0.0
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS) -L libraries/curl/build/lib/ -lcurl /usr/lib64/libQt5Widgets.so /usr/lib64/libQt5Gui.so /usr/lib64/libQt5Core.so -lGL -lpthread   
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		loginwindow.cpp \
		LoginController.cpp \
		Account.cpp \
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
		calenderWindow.cpp moc_mainwindow.cpp \
		moc_loginwindow.cpp \
		moc_calenderWindow.cpp
OBJECTS       = main.o \
		mainwindow.o \
		loginwindow.o \
		LoginController.o \
		Account.o \
		FoodList.o \
		RequestHandler.o \
		RecipeList.o \
		Recipe.o \
		userpreferencewindow.o \
		AllergyList.o \
		CuisineList.o \
		DietList.o \
		FitnessPreferences.o \
		UserPreferencesController.o \
		calenderWindow.o \
		moc_mainwindow.o \
		moc_loginwindow.o \
		moc_calenderWindow.o
DIST          = /../lib64/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib64/qt5/mkspecs/common/unix.conf \
		/usr/lib64/qt5/mkspecs/common/linux.conf \
		/usr/lib64/qt5/mkspecs/common/sanitize.conf \
		/usr/lib64/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib64/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib64/qt5/mkspecs/common/g++-base.conf \
		/usr/lib64/qt5/mkspecs/common/g++-unix.conf \
		/../lib64/qt5/mkspecs/qconfig.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_core.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_edid_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_egl_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_fb_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_glx_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_gui.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_input_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_kms_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_location.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_location_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_network.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_positioning.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_positioning_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_positioningquick.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_positioningquick_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qml.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qml_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmldebug_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmlmodels.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmlmodels_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmltest_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmlworkerscript.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmlworkerscript_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_quick.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_quick_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_quickshapes_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_quickwidgets.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_sensors.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_sensors_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_service_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_sql.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_theme_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_vulkan_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_webkit.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_webkit_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_xkbcommon_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_xml.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/../lib64/qt5/mkspecs/features/qt_functions.prf \
		/../lib64/qt5/mkspecs/features/qt_config.prf \
		/../lib64/qt5/mkspecs/linux-g++/qmake.conf \
		/../lib64/qt5/mkspecs/features/spec_post.prf \
		/../lib64/qt5/mkspecs/features/exclusive_builds.prf \
		/../lib64/qt5/mkspecs/features/toolchain.prf \
		/../lib64/qt5/mkspecs/features/default_pre.prf \
		/../lib64/qt5/mkspecs/features/resolve_config.prf \
		/../lib64/qt5/mkspecs/features/default_post.prf \
		/../lib64/qt5/mkspecs/features/warn_on.prf \
		/../lib64/qt5/mkspecs/features/qt.prf \
		/../lib64/qt5/mkspecs/features/resources_functions.prf \
		/../lib64/qt5/mkspecs/features/resources.prf \
		/../lib64/qt5/mkspecs/features/moc.prf \
		/../lib64/qt5/mkspecs/features/unix/opengl.prf \
		/../lib64/qt5/mkspecs/features/uic.prf \
		/../lib64/qt5/mkspecs/features/unix/thread.prf \
		/../lib64/qt5/mkspecs/features/qmake_use.prf \
		/../lib64/qt5/mkspecs/features/file_copies.prf \
		/../lib64/qt5/mkspecs/features/testcase_targets.prf \
		/../lib64/qt5/mkspecs/features/exceptions.prf \
		/../lib64/qt5/mkspecs/features/yacc.prf \
		/../lib64/qt5/mkspecs/features/lex.prf \
		GUI.pro mainwindow.h \
		loginwindow.h \
		LoginController.h \
		Account.h \
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
		calenderWindow.h main.cpp \
		mainwindow.cpp \
		loginwindow.cpp \
		LoginController.cpp \
		Account.cpp \
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
QMAKE_TARGET  = GUI
DESTDIR       = 
TARGET        = GUI


first: all
####### Build rules

GUI:  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: GUI.pro /../lib64/qt5/mkspecs/linux-g++/qmake.conf /../lib64/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib64/qt5/mkspecs/common/unix.conf \
		/usr/lib64/qt5/mkspecs/common/linux.conf \
		/usr/lib64/qt5/mkspecs/common/sanitize.conf \
		/usr/lib64/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib64/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib64/qt5/mkspecs/common/g++-base.conf \
		/usr/lib64/qt5/mkspecs/common/g++-unix.conf \
		/../lib64/qt5/mkspecs/qconfig.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_core.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_edid_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_egl_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_fb_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_glx_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_gui.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_input_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_kms_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_location.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_location_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_network.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_positioning.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_positioning_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_positioningquick.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_positioningquick_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qml.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qml_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmldebug_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmlmodels.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmlmodels_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmltest_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmlworkerscript.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_qmlworkerscript_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_quick.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_quick_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_quickshapes_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_quickwidgets.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_sensors.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_sensors_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_service_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_sql.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_theme_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_vulkan_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_webkit.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_webkit_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_xkbcommon_support_private.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_xml.pri \
		/../lib64/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/../lib64/qt5/mkspecs/features/qt_functions.prf \
		/../lib64/qt5/mkspecs/features/qt_config.prf \
		/../lib64/qt5/mkspecs/linux-g++/qmake.conf \
		/../lib64/qt5/mkspecs/features/spec_post.prf \
		/../lib64/qt5/mkspecs/features/exclusive_builds.prf \
		/../lib64/qt5/mkspecs/features/toolchain.prf \
		/../lib64/qt5/mkspecs/features/default_pre.prf \
		/../lib64/qt5/mkspecs/features/resolve_config.prf \
		/../lib64/qt5/mkspecs/features/default_post.prf \
		/../lib64/qt5/mkspecs/features/warn_on.prf \
		/../lib64/qt5/mkspecs/features/qt.prf \
		/../lib64/qt5/mkspecs/features/resources_functions.prf \
		/../lib64/qt5/mkspecs/features/resources.prf \
		/../lib64/qt5/mkspecs/features/moc.prf \
		/../lib64/qt5/mkspecs/features/unix/opengl.prf \
		/../lib64/qt5/mkspecs/features/uic.prf \
		/../lib64/qt5/mkspecs/features/unix/thread.prf \
		/../lib64/qt5/mkspecs/features/qmake_use.prf \
		/../lib64/qt5/mkspecs/features/file_copies.prf \
		/../lib64/qt5/mkspecs/features/testcase_targets.prf \
		/../lib64/qt5/mkspecs/features/exceptions.prf \
		/../lib64/qt5/mkspecs/features/yacc.prf \
		/../lib64/qt5/mkspecs/features/lex.prf \
		GUI.pro
	$(QMAKE) -o Makefile GUI.pro
/../lib64/qt5/mkspecs/features/spec_pre.prf:
/usr/lib64/qt5/mkspecs/common/unix.conf:
/usr/lib64/qt5/mkspecs/common/linux.conf:
/usr/lib64/qt5/mkspecs/common/sanitize.conf:
/usr/lib64/qt5/mkspecs/common/gcc-base.conf:
/usr/lib64/qt5/mkspecs/common/gcc-base-unix.conf:
/usr/lib64/qt5/mkspecs/common/g++-base.conf:
/usr/lib64/qt5/mkspecs/common/g++-unix.conf:
/../lib64/qt5/mkspecs/qconfig.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_core.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_core_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_dbus.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_edid_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_egl_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_fb_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_glx_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_gui.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_gui_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_input_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_kms_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_location.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_location_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_network.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_network_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_opengl.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_packetprotocol_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_positioning.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_positioning_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_positioningquick.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_positioningquick_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_qml.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_qml_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_qmldebug_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_qmlmodels.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_qmlmodels_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_qmltest.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_qmltest_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_qmlworkerscript.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_qmlworkerscript_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_quick.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_quick_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_quickshapes_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_quickwidgets.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_sensors.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_sensors_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_service_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_sql.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_sql_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_testlib.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_theme_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_vulkan_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_webkit.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_webkit_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_webkitwidgets.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_webkitwidgets_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_widgets.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_xkbcommon_support_private.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_xml.pri:
/../lib64/qt5/mkspecs/modules/qt_lib_xml_private.pri:
/../lib64/qt5/mkspecs/features/qt_functions.prf:
/../lib64/qt5/mkspecs/features/qt_config.prf:
/../lib64/qt5/mkspecs/linux-g++/qmake.conf:
/../lib64/qt5/mkspecs/features/spec_post.prf:
/../lib64/qt5/mkspecs/features/exclusive_builds.prf:
/../lib64/qt5/mkspecs/features/toolchain.prf:
/../lib64/qt5/mkspecs/features/default_pre.prf:
/../lib64/qt5/mkspecs/features/resolve_config.prf:
/../lib64/qt5/mkspecs/features/default_post.prf:
/../lib64/qt5/mkspecs/features/warn_on.prf:
/../lib64/qt5/mkspecs/features/qt.prf:
/../lib64/qt5/mkspecs/features/resources_functions.prf:
/../lib64/qt5/mkspecs/features/resources.prf:
/../lib64/qt5/mkspecs/features/moc.prf:
/../lib64/qt5/mkspecs/features/unix/opengl.prf:
/../lib64/qt5/mkspecs/features/uic.prf:
/../lib64/qt5/mkspecs/features/unix/thread.prf:
/../lib64/qt5/mkspecs/features/qmake_use.prf:
/../lib64/qt5/mkspecs/features/file_copies.prf:
/../lib64/qt5/mkspecs/features/testcase_targets.prf:
/../lib64/qt5/mkspecs/features/exceptions.prf:
/../lib64/qt5/mkspecs/features/yacc.prf:
/../lib64/qt5/mkspecs/features/lex.prf:
GUI.pro:
qmake: FORCE
	@$(QMAKE) -o Makefile GUI.pro

qmake_all: FORCE


all: Makefile GUI

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/
	$(COPY_FILE) --parents /../lib64/qt5/mkspecs/features/data/dummy.cpp $(DISTDIR)/
	$(COPY_FILE) --parents mainwindow.h loginwindow.h LoginController.h Account.h FoodList.h RequestHandler.h RecipeList.h Recipe.h userpreferencewindow.h AllergyList.h CuisineList.h DietList.h FitnessPreferences.h UserPreferencesController.h calenderWindow.h $(DISTDIR)/
	$(COPY_FILE) --parents main.cpp mainwindow.cpp loginwindow.cpp LoginController.cpp Account.cpp FoodList.cpp RequestHandler.cpp RecipeList.cpp Recipe.cpp userpreferencewindow.cpp AllergyList.cpp CuisineList.cpp DietList.cpp FitnessPreferences.cpp UserPreferencesController.cpp calenderWindow.cpp $(DISTDIR)/


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) .qmake.stash
	-$(DEL_FILE) Makefile


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_objc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_objc_header_make_all compiler_moc_source_make_all

check: first

benchmark: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_predefs_make_all: moc_predefs.h
compiler_moc_predefs_clean:
	-$(DEL_FILE) moc_predefs.h
moc_predefs.h: /../lib64/qt5/mkspecs/features/data/dummy.cpp
	g++ -pipe -O2 -std=gnu++11 -Wall -Wextra -dM -E -o moc_predefs.h /../lib64/qt5/mkspecs/features/data/dummy.cpp

compiler_moc_header_make_all: moc_mainwindow.cpp moc_loginwindow.cpp moc_calenderWindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_loginwindow.cpp moc_calenderWindow.cpp
moc_mainwindow.cpp: mainwindow.h \
		calenderWindow.h \
		RecipeList.h \
		Recipe.h \
		FoodList.h \
		RequestHandler.h \
		userpreferencewindow.h \
		FitnessPreferences.h \
		UserPreferencesController.h \
		Account.h \
		AllergyList.h \
		DietList.h \
		CuisineList.h \
		moc_predefs.h \
		/../lib64/qt5/bin/moc
	/../lib64/qt5/bin/moc $(DEFINES) --include /home/jquresh3/group12/moc_predefs.h -I/../lib64/qt5/mkspecs/linux-g++ -I/home/jquresh3/group12 -I/home/jquresh3/group12/libraries/curl/include -I/home/jquresh3/group12/libraries/nlohmann/include -I/usr/include/qt5 -I/usr/include/qt5/QtWidgets -I/usr/include/qt5/QtGui -I/usr/include/qt5/QtCore -I/usr/include/c++/11 -I/usr/include/c++/11/x86_64-redhat-linux -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-redhat-linux/11/include -I/usr/local/include -I/usr/include mainwindow.h -o moc_mainwindow.cpp

moc_loginwindow.cpp: loginwindow.h \
		LoginController.h \
		Account.h \
		mainwindow.h \
		calenderWindow.h \
		RecipeList.h \
		Recipe.h \
		FoodList.h \
		RequestHandler.h \
		userpreferencewindow.h \
		FitnessPreferences.h \
		UserPreferencesController.h \
		AllergyList.h \
		DietList.h \
		CuisineList.h \
		moc_predefs.h \
		/../lib64/qt5/bin/moc
	/../lib64/qt5/bin/moc $(DEFINES) --include /home/jquresh3/group12/moc_predefs.h -I/../lib64/qt5/mkspecs/linux-g++ -I/home/jquresh3/group12 -I/home/jquresh3/group12/libraries/curl/include -I/home/jquresh3/group12/libraries/nlohmann/include -I/usr/include/qt5 -I/usr/include/qt5/QtWidgets -I/usr/include/qt5/QtGui -I/usr/include/qt5/QtCore -I/usr/include/c++/11 -I/usr/include/c++/11/x86_64-redhat-linux -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-redhat-linux/11/include -I/usr/local/include -I/usr/include loginwindow.h -o moc_loginwindow.cpp

moc_calenderWindow.cpp: calenderWindow.h \
		moc_predefs.h \
		/../lib64/qt5/bin/moc
	/../lib64/qt5/bin/moc $(DEFINES) --include /home/jquresh3/group12/moc_predefs.h -I/../lib64/qt5/mkspecs/linux-g++ -I/home/jquresh3/group12 -I/home/jquresh3/group12/libraries/curl/include -I/home/jquresh3/group12/libraries/nlohmann/include -I/usr/include/qt5 -I/usr/include/qt5/QtWidgets -I/usr/include/qt5/QtGui -I/usr/include/qt5/QtCore -I/usr/include/c++/11 -I/usr/include/c++/11/x86_64-redhat-linux -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-redhat-linux/11/include -I/usr/local/include -I/usr/include calenderWindow.h -o moc_calenderWindow.cpp

compiler_moc_objc_header_make_all:
compiler_moc_objc_header_clean:
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_predefs_clean compiler_moc_header_clean 

####### Compile

main.o: main.cpp loginwindow.h \
		LoginController.h \
		Account.h \
		mainwindow.h \
		calenderWindow.h \
		RecipeList.h \
		Recipe.h \
		FoodList.h \
		RequestHandler.h \
		userpreferencewindow.h \
		FitnessPreferences.h \
		UserPreferencesController.h \
		AllergyList.h \
		DietList.h \
		CuisineList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		calenderWindow.h \
		RecipeList.h \
		Recipe.h \
		FoodList.h \
		RequestHandler.h \
		userpreferencewindow.h \
		FitnessPreferences.h \
		UserPreferencesController.h \
		Account.h \
		AllergyList.h \
		DietList.h \
		CuisineList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

loginwindow.o: loginwindow.cpp loginwindow.h \
		LoginController.h \
		Account.h \
		mainwindow.h \
		calenderWindow.h \
		RecipeList.h \
		Recipe.h \
		FoodList.h \
		RequestHandler.h \
		userpreferencewindow.h \
		FitnessPreferences.h \
		UserPreferencesController.h \
		AllergyList.h \
		DietList.h \
		CuisineList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o loginwindow.o loginwindow.cpp

LoginController.o: LoginController.cpp LoginController.h \
		Account.h \
		UserPreferencesController.h \
		FitnessPreferences.h \
		AllergyList.h \
		DietList.h \
		CuisineList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LoginController.o LoginController.cpp

Account.o: Account.cpp Account.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Account.o Account.cpp

FoodList.o: FoodList.cpp FoodList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o FoodList.o FoodList.cpp

RequestHandler.o: RequestHandler.cpp libraries/curl/include/curl/curl.h \
		libraries/curl/include/curl/curlver.h \
		libraries/curl/include/curl/system.h \
		libraries/curl/include/curl/easy.h \
		libraries/curl/include/curl/multi.h \
		libraries/curl/include/curl/urlapi.h \
		libraries/curl/include/curl/options.h \
		libraries/curl/include/curl/typecheck-gcc.h \
		libraries/nlohmann/include/nlohmann/json.hpp \
		libraries/nlohmann/include/nlohmann/adl_serializer.hpp \
		libraries/nlohmann/include/nlohmann/detail/conversions/from_json.hpp \
		libraries/nlohmann/include/nlohmann/detail/exceptions.hpp \
		libraries/nlohmann/include/nlohmann/detail/value_t.hpp \
		libraries/nlohmann/include/nlohmann/detail/string_escape.hpp \
		libraries/nlohmann/include/nlohmann/detail/macro_scope.hpp \
		libraries/nlohmann/include/nlohmann/thirdparty/hedley/hedley.hpp \
		libraries/nlohmann/include/nlohmann/detail/meta/detected.hpp \
		libraries/nlohmann/include/nlohmann/detail/meta/void_t.hpp \
		libraries/nlohmann/include/nlohmann/detail/input/position_t.hpp \
		libraries/nlohmann/include/nlohmann/detail/meta/cpp_future.hpp \
		libraries/nlohmann/include/nlohmann/detail/meta/identity_tag.hpp \
		libraries/nlohmann/include/nlohmann/detail/meta/type_traits.hpp \
		libraries/nlohmann/include/nlohmann/detail/iterators/iterator_traits.hpp \
		libraries/nlohmann/include/nlohmann/detail/meta/call_std/begin.hpp \
		libraries/nlohmann/include/nlohmann/detail/meta/call_std/end.hpp \
		libraries/nlohmann/include/nlohmann/json_fwd.hpp \
		libraries/nlohmann/include/nlohmann/detail/conversions/to_json.hpp \
		libraries/nlohmann/include/nlohmann/detail/iterators/iteration_proxy.hpp \
		libraries/nlohmann/include/nlohmann/byte_container_with_subtype.hpp \
		libraries/nlohmann/include/nlohmann/detail/hash.hpp \
		libraries/nlohmann/include/nlohmann/detail/input/binary_reader.hpp \
		libraries/nlohmann/include/nlohmann/detail/input/input_adapters.hpp \
		libraries/nlohmann/include/nlohmann/detail/input/json_sax.hpp \
		libraries/nlohmann/include/nlohmann/detail/input/lexer.hpp \
		libraries/nlohmann/include/nlohmann/detail/meta/is_sax.hpp \
		libraries/nlohmann/include/nlohmann/detail/input/parser.hpp \
		libraries/nlohmann/include/nlohmann/detail/iterators/internal_iterator.hpp \
		libraries/nlohmann/include/nlohmann/detail/iterators/primitive_iterator.hpp \
		libraries/nlohmann/include/nlohmann/detail/iterators/iter_impl.hpp \
		libraries/nlohmann/include/nlohmann/detail/iterators/json_reverse_iterator.hpp \
		libraries/nlohmann/include/nlohmann/detail/json_pointer.hpp \
		libraries/nlohmann/include/nlohmann/detail/json_ref.hpp \
		libraries/nlohmann/include/nlohmann/detail/output/binary_writer.hpp \
		libraries/nlohmann/include/nlohmann/detail/output/output_adapters.hpp \
		libraries/nlohmann/include/nlohmann/detail/output/serializer.hpp \
		libraries/nlohmann/include/nlohmann/detail/conversions/to_chars.hpp \
		libraries/nlohmann/include/nlohmann/ordered_map.hpp \
		libraries/nlohmann/include/nlohmann/detail/macro_unscope.hpp \
		libraries/nlohmann/include/nlohmann/thirdparty/hedley/hedley_undef.hpp \
		RequestHandler.h \
		FoodList.h \
		RecipeList.h \
		Recipe.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RequestHandler.o RequestHandler.cpp

RecipeList.o: RecipeList.cpp RecipeList.h \
		Recipe.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RecipeList.o RecipeList.cpp

Recipe.o: Recipe.cpp Recipe.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Recipe.o Recipe.cpp

userpreferencewindow.o: userpreferencewindow.cpp userpreferencewindow.h \
		FitnessPreferences.h \
		UserPreferencesController.h \
		Account.h \
		AllergyList.h \
		DietList.h \
		CuisineList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o userpreferencewindow.o userpreferencewindow.cpp

AllergyList.o: AllergyList.cpp AllergyList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AllergyList.o AllergyList.cpp

CuisineList.o: CuisineList.cpp CuisineList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CuisineList.o CuisineList.cpp

DietList.o: DietList.cpp DietList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o DietList.o DietList.cpp

FitnessPreferences.o: FitnessPreferences.cpp FitnessPreferences.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o FitnessPreferences.o FitnessPreferences.cpp

UserPreferencesController.o: UserPreferencesController.cpp UserPreferencesController.h \
		Account.h \
		FitnessPreferences.h \
		AllergyList.h \
		DietList.h \
		CuisineList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o UserPreferencesController.o UserPreferencesController.cpp

calenderWindow.o: calenderWindow.cpp calenderWindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o calenderWindow.o calenderWindow.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_loginwindow.o: moc_loginwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_loginwindow.o moc_loginwindow.cpp

moc_calenderWindow.o: moc_calenderWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_calenderWindow.o moc_calenderWindow.cpp

####### Install

install_target: first FORCE
	@test -d $(INSTALL_ROOT)/opt/GUI/bin || mkdir -p $(INSTALL_ROOT)/opt/GUI/bin
	$(QINSTALL_PROGRAM) $(QMAKE_TARGET) $(INSTALL_ROOT)/opt/GUI/bin/$(QMAKE_TARGET)
	-$(STRIP) $(INSTALL_ROOT)/opt/GUI/bin/$(QMAKE_TARGET)

uninstall_target: FORCE
	-$(DEL_FILE) $(INSTALL_ROOT)/opt/GUI/bin/$(QMAKE_TARGET)
	-$(DEL_DIR) $(INSTALL_ROOT)/opt/GUI/bin/ 


install: install_target  FORCE

uninstall: uninstall_target  FORCE

FORCE:

