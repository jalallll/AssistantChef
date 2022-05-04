#include "LoginController.h"

using namespace std;

LoginController::LoginController() {}

LoginController::~LoginController()
{
}
//added method
string LoginController::getDatabase()
{
    return this->databaseName;
}

//helper method for parsing
vector<string> parseCommaDelimitedString(string line)
{
    vector<string> result;
    //stringstream s_stream(line);
}

bool LoginController::loginAccount(string user_name, string pass_word)
{
    ifstream myFile("file.txt");

    if (!myFile.is_open())
    {
        return false;
    }
    string line;

    while (getline(myFile, line))
    {
        string delimiter = ", ";
        string username = line.substr(0, line.find(delimiter));
        string password = line.substr(line.find(delimiter) + 2, -1);
        // if username is in the file
        if (username == user_name)
        {
            if (password == pass_word)
            {
                return true;
            }

            return false;
        }
    }

    return false;
}

bool userExists(string name)
{
    ifstream myFile("file.txt");
    string line;
    if (myFile.is_open())
    {
        while (!myFile.eof())
        {
            getline(myFile, line);

            string delimiter = ", ";
            string username = line.substr(0, line.find(delimiter));
            cout << username << "\n";
            // if username is in the file
            if (username == name)
            {
                return true;
            }

            myFile.close();
        }
        return false;
    }
}

bool LoginController::registerAccount(Account account)
{
    fstream myFile;
    cout << "Does the username exist: " << userExists(account.getUsername());
    if (userExists(account.getUsername()))
    {
        cout << account.getUsername() << "User already exists";
        return false;
    }
    else
    {
        string username = account.getUsername();
        string password = account.getPassword();
        cout << account.getUsername() << ", " << account.getPassword() << "\n";
        // open the file
        myFile.open("file.txt", ios::in | ios::out | ios::app);
        // if file doesnt open then return false
        if (!myFile.is_open())
        {
            return false;
        }
        else
        {
            account.setUsername(username);
            account.setPassword(password);
            myFile << username << ", " << password << "\n";
            myFile.close();
            return true;
        }
        // if file opens then append the username and password

        // Todo: Find out if file will be appended with space between username and password
    }
    return false;
}

// int main()
// {
//     LoginController c = LoginController();
//     Account a = Account("Henry", "asdf");
//     cout << "Register worked for: " << c.registerAccount(a) << "\n ";
//     cout << "\nlogin\n";
//     cout << c.loginAccount("Uwo", "asdf");
// }