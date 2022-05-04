#include "Account.h"

using namespace std;

Account::~Account()
{
}
Account::Account(string username1, string password2)
{
    username = username1;
    password = password2;
}
string Account::getUsername()
{
    return username;
}
std::string Account::getPassword()
{
    return password;
}
// UserPreference Account::getUserPreference(){
//     return storedUserPreferences;
// }

void Account::setUsername(std::string username)
{
    username = username;
}
void Account::setPassword(std::string password)
{
    password = password;
    
}
