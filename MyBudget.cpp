#include "MyBudget.h"

void MyBudget::userRegister() {
    userManager.userRegister();
}

void MyBudget::printAllUsers() {
    userManager.printAllUsers();
}

void MyBudget::userLogin() {
    userManager.login();
    if (userManager.isUserLoggedIn()) {
        cout << "user is logged in";
    }
}

bool MyBudget::isUserLoggedOut() {
    if (userManager.getLoggedInUserId() == 0) return true;
    else return false;
}

char MyBudget::chooseMainMenuOption() {
    char choice;

    system("cls");
    cout << "    >>> MAIN MENU <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. User register" << endl;
    cout << "2. User login" << endl;
    cout << "9. Exite" << endl;
    cout << "---------------------------" << endl;
    cout << "Your choice: ";
    choice = UnasignedMethods::takeChar();

    return choice;
}

char MyBudget::chooseUserMenuOption() {
    char choice;

    system("cls");
    cout << "    >>> USER MENU <<<" << endl; //mozna dodac wyswietlanie imienia uzytkownika
    cout << "---------------------------" << endl;
    cout << "1. Add income" << endl;
    cout << "2. Add expense" << endl;
    cout << "3. Current month balance" << endl;
    cout << "4. Last month balance" << endl;
    cout << "5. Chosen period balance" << endl;
    cout << "6. Change password" << endl;
    cout << "9. Log out" << endl;
    cout << "---------------------------" << endl;
    cout << "Your choice: ";
    choice = UnasignedMethods::takeChar();

    return choice;
}
