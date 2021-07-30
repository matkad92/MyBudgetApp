#ifndef USER_H
#define USER_H


#include <iostream>

using namespace std;

class User
{
    int userId;
    string userLogin;
    string userPassword;
    string userName;
    string userSurname;

public:
    void setUserId(int newId);
    void setUserLogin(string newLogin);
    void setUserPassword(string newPassword);
    void setUserName(string newName);
    void setUserSurname(string newSurname);

    int getUserId();
    string getUserLogin();
    string getUserPassword();
    string getUserName();
    string getUserSurname();

};


#endif // USER_H

