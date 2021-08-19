#include <iostream>
#include "MyBudget.h"

using namespace std;

int mainTest() {
    MyBudget myBudget("users.xml", "expenses.xml", "incomes.xml");
    char choice;
    while (true) {
        if (myBudget.isUserLoggedOut()) {
            choice = myBudget.chooseMainMenuOption();
            switch (choice) {
            case '1':
                myBudget.userRegister();
                break;
            case '2':
                myBudget.userLogin();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "There is no such option in main menu." << endl << endl;
                system("pause");
                break;
            }
        } else {
            choice = myBudget.chooseUserMenuOption();
            switch (choice) {
            case '1':
                //myBudget.addIncome();
                break;
            case '2':
                //myBudget.addExpense();
                break;
            case '3':
                //myBudget.balance();
                break;
            case '4':
                //myBudget.lastMonthBalance();
                break;
            case '5':
                //myBudget.chosenPeriodBalance();
                break;
            case '6':
                //myBudget.passwordChange();
                break;
            case '9':
                //myBudget.logOut();
                break;
            }
        }
    }


    return 0;
}


int main() {

    MyBudget myBudget("users.xml", "expenses.xml", "incomes.xml");
    myBudget.userLogin();
    myBudget.addIncome();
    myBudget.addIncome();
    myBudget.printAllIncomes();

    return 0;
}
