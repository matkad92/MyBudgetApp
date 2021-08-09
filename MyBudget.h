#include <iostream>
#include "UserManager.h"


using namespace std;

class MyBudget {
    UserManager userManager;
    int loggedInUserId;

public:
    MyBudget(string userFileName): userManager(userFileName) {
        loggedInUserId = 0;
    }
    void userRegister();
    void printAllUsers();
    void userLogin();
    bool isUserLoggedOut();
    char chooseMainMenuOption();
    char chooseUserMenuOption();

};
