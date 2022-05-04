#ifndef ACCOUNT_H
#define ACCOUNT_H


#include <iostream>
#include <string>
#include <vector>
class Account{
    private:
        std::string username;
        std::string password;
        // std::vector<int> dateTracker;
        // UserPreference storedUserPreferences;
    public:
        explicit Account(std::string, std::string);
        ~Account();
        std::string getUsername();
        std::string getPassword();
        // UserPreference getUserPreference();
        void setUsername(std::string username);
        void setPassword(std::string password);
        // void setUserPreference(UserPreference userPreference);
        // bool isGoalReached(int date);
        // void addDate(int date);
        // void removeDate(int date);

};

#endif