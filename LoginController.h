#ifndef LOGINCONTROLLER_H
#define LOGINCONTROLLER_H
#include "UserPreferencesController.h"

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Account.h"

class LoginController
{
private:
    std::string databaseName;

public:
    explicit LoginController();
    ~LoginController();
    std::string getDatabase();
    bool loginAccount(std::string, std::string);
    bool registerAccount(Account);
};

#endif