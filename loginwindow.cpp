#include "loginwindow.h"
#include "mainwindow.h"

#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include <QWidget>
#include <QObject>
#include <QLineEdit>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QString>

/*
 * This class displays the login page
 *
 */
LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent)
{
    MainWindow mainwindow;

    //set up username field
    QLabel *usernameLabel = new QLabel(tr("Username"));
    usernameLine = new QLineEdit;

    //set up password field
    QLabel *passwordLabel = new QLabel(tr("Password"));
    passwordLine = new QLineEdit;

    //set up register field
    RegisterButton = new QPushButton(tr("&Register"));
    RegisterButton->show();

    //connect the register button with submitRegister
    connect(RegisterButton, &QPushButton::clicked, this, &LoginWindow::submitRegister);

    //create login button
    LoginButton = new QPushButton(tr("&Login"));
    LoginButton->show();

    //connect login button with submitLogin
    connect(LoginButton, &QPushButton::clicked, this, &LoginWindow::submitLogin);

    //Layout labels, lines, and buttons
    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(usernameLabel, 0, 0);
    mainLayout->addWidget(usernameLine, 0, 1);
    mainLayout->addWidget(passwordLabel, 1, 0, Qt::AlignTop);
    mainLayout->addWidget(passwordLine, 1, 1);

    mainLayout->addWidget(RegisterButton, 2, 0);
    mainLayout->addWidget(LoginButton, 2, 1);

    setLayout(mainLayout);
    setWindowTitle(tr("LOGIN"));
}

LoginWindow::~LoginWindow()
{
}

void LoginWindow::submitRegister()
{
    QString username = usernameLine->text();
    QString password = passwordLine->text();

    if (username.isEmpty() || password.isEmpty())
    {
        QMessageBox::information(this, tr("Empty Field"), tr("Please enter your username and password."));
        return;
    }

    LoginController controller = LoginController();
    std::string x = username.toStdString();
    std::string y = password.toStdString();

    Account user = Account(x, y);

    if (controller.registerAccount(user))
    {
        QMessageBox::information(this, tr("Add Successful."), tr("\"%1\" has been registered successfully.").arg(username));
    }
    else
    {
        QMessageBox::information(this, tr("Add Unsuccessful."), tr("Sorry, \"%1\" already exists. Please try again.").arg(username));
        return;
    }
}

void LoginWindow::submitLogin()
{
    QString username = usernameLine->text();
    QString password = passwordLine->text();

    if (username.isEmpty() || password.isEmpty())
    {
        QMessageBox::information(this, tr("Empty Field"), tr("Please enter your username and password."));
        return;
    }

    LoginController controller = LoginController();

    if (controller.loginAccount(username.toStdString(), password.toStdString()) == true)
    {
        QMessageBox::information(this, "Login", "Username and Password are correct.");
        //transfer username to main window
        mainwindow.setUserName(username.toStdString());
        mainwindow.show();
        usernameLine->setReadOnly(true);
        passwordLine->setReadOnly(true);
    }
    else
    {
        QMessageBox::information(this, "Login", "Username or password is not correct.");
    }
}
