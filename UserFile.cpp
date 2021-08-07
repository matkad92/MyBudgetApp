#include "UserFile.h"

void UserFile::addUserToFile(User user){

    bool fileExists = users.Load( "users.xml" );//zwraca true gdzy plik udalo sie otworzyc

    if (!fileExists)
    {
        users.SetDoc("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n");
        users.AddElem("Users");//dodaje element na pozycji glownej
    }

    users.FindElem();//przestawia glowna pozycje na "rodzenstwo"
    users.IntoElem();//ustawia galaz jako glowna , na ktorej mozna pracowac
    users.AddElem("User");
    users.IntoElem();
    users.AddElem("UserId", user.getId());
    users.AddElem("Login", user.getLogin());
    users.AddElem("Password", user.getPassword());
    users.AddElem("Name", user.getName());
    users.AddElem("Surname", user.getSurname());

    users.Save("users.xml");
}
