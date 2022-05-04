/*
Author: Group 12

Description of file contents: Create an object of type CuisineList, containing a vector of strings that stores the cuisine preferances of the user. 
                         
Date: 11/30/2021
*/

#include "loginwindow.h"

#include <QCoreApplication>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QListWidget>
#include <QMap>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    LoginWindow loginWindow;
    loginWindow.show();

    return app.exec();
}