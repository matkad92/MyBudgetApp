#ifndef INCOMESFILE_H
#define INCOMESFILE_H

#include <iostream>

#include "Income.h"
#include "FileXml.h"
#include "UnasignedMethods.h"

using namespace std;

class IncomesFile : public FileXml {

    int lastIncomeId;
public:
    int getLastIncomeId();
};


#endif // INCOMESFILE_H
