#include <iostream>
#include "MyBudget.h"

using namespace std;

int main()
{
    MyBudget myBudget("users.xml");

    myBudget.userRegister();
    //myBudget.userRegister();

    myBudget.printAllUsers();


    return 0;
}
