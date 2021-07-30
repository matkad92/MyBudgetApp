#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include <vector>
#include <cstdlib>

#include "User.h"
#include "UserFile.h"
#include "UnasignedMethods.h"

using namespace std;

class UserManager
{
    vector <User> users;
    UserFile userFile;

    User getNewUserData();
    bool isLoginOccupied(string login);
    int getNewUserId();

public:
    void userRegister();
    void printAllUsers();
};



#endif // USERMANAGER_H


