#ifndef USERFILE_H
#define USERFILE_H

#include <iostream>
#include "FileXml.h"
#include "User.h"

using namespace std;


class UserFile: public FileXml
{
    CMarkup users;
public:
    void addUserToFile(User user);

};



#endif // USERFILE_H


