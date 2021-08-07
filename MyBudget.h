#include <iostream>
#include "UserManager.h"


using namespace std;

class MyBudget
{
    UserManager userManager;

public:
    MyBudget(string userFileName): userManager(userFileName){};
    void userRegister();
    void printAllUsers();

};
