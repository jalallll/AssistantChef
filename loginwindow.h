#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

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

#include "LoginController.h"
#include "mainwindow.h"

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private:
    QLineEdit *usernameLine;
    QLineEdit *passwordLine;

    QPushButton *RegisterButton;
    QPushButton *LoginButton;

    QMap<QString, QString> loginInfo;
    QString oldUserName;
    QString oldPassword;

    MainWindow mainwindow;

public slots:
    void submitRegister();
    void submitLogin();
};

#endif // LOGINWINDOW_H
