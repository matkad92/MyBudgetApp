#include "UserManager.h"

void UserManager::userRegister(){
    User user = getNewUserData();
    users.push_back(user);
    //userFile.addUserToFile(user);

    cout << endl << "User has been created successfully."<< endl << endl;
    system("pause");
}
User UserManager::getNewUserData(){
    User user;
    string login;

    do{
        cout << "Enter login: ";
        cin >> login;
        user.setUserLogin(login);
    }while (isLoginOccupied(user.getUserLogin()) == true);

    user.setUserId(getNewUserId());

    cout << "Enter Password: ";
    string password;//Mozna dodac opcje sprawdzania formatu hasla
    cin.sync();
    password = UnasignedMethods::takeLine();
    user.setUserPassword(password);

    cout <<  "Enter Name: ";
    string name;
    name = UnasignedMethods::takeLine();
    user.setUserName(name);

    cout << "Enter Surname: ";
    string surname;
    surname = UnasignedMethods::takeLine();
    user.setUserSurname(surname);

    return user;
}

bool UserManager::isLoginOccupied(string login){
    for (int i = 0; i < users.size(); i++){
        if (users[i].getUserLogin() == login){
            cout << endl << "User with this login already exists!" << endl;
            return true;
        }
    }
    return false;
}

int UserManager::getNewUserId(){
    if (users.empty() == true) return 1;
    else return users.back().getUserId() + 1;
}

void UserManager::printAllUsers(){
    for ( int i = 0; i < users.size(); i++){
        cout << users[i].getUserId() << endl;
        cout << users[i].getUserLogin() << endl;
        cout << users[i].getUserPassword() << endl;
        cout << users[i].getUserName() << endl;
        cout << users[i].getUserSurname() << endl;
    }
}

