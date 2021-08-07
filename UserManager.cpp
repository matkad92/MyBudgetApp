#include "UserManager.h"

void UserManager::userRegister(){
    User user = getNewUserData();
    users.push_back(user);
    userFile.addUserToFile(user);

    cout << endl << "User has been created successfully."<< endl << endl;
    system("pause");
}
User UserManager::getNewUserData(){
    User user;
    string login;

    do{
        cout << "Enter login: ";
        cin >> login;
        user.setLogin(login);
    }while (isLoginOccupied(user.getLogin()) == true);

    user.setId(getNewUserId());

    cout << "Enter Password: ";
    string password;//Mozna dodac opcje sprawdzania formatu hasla
    cin.sync();
    password = UnasignedMethods::takeLine();
    user.setPassword(password);

    cout <<  "Enter Name: ";
    string name;
    name = UnasignedMethods::takeLine();
    user.setName(name);

    cout << "Enter Surname: ";
    string surname;
    surname = UnasignedMethods::takeLine();
    user.setSurname(surname);

    return user;
}

bool UserManager::isLoginOccupied(string login){
    for (int i = 0; i < users.size(); i++){
        if (users[i].getLogin() == login){
            cout << endl << "User with this login already exists!" << endl;
            return true;
        }
    }
    return false;
}

int UserManager::getNewUserId(){
    if (users.empty() == true) return 1;
    else return users.back().getId() + 1;
}

void UserManager::printAllUsers(){
    for ( int i = 0; i < users.size(); i++){
        cout << users[i].getId() << endl;
        cout << users[i].getLogin() << endl;
        cout << users[i].getPassword() << endl;
        cout << users[i].getName() << endl;
        cout << users[i].getSurname() << endl;
    }
}

