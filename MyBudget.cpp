#include "MyBudget.h"

void MyBudget::userRegister(){
    userManager.userRegister();
}
void MyBudget::printAllUsers(){
    userManager.printAllUsers();
}
void MyBudget::userLogin(){
    userManager.login();
    if (userManager.isUserLoggedIn()){
        cout << "user is logged in";
    }
}
