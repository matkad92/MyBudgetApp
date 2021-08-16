#ifndef INCOMESMANAGER_H
#define INCOMESMANAGER_H

#include <iostream>
#include <vector>
#include <conio.h>

#include "Income.h"
#include "IncomesFile.h"
#include "DateOperations.h"


using namespace std;

class IncomesManager {
    vector<Income> incomes;
    const string INCOMES_FILE_NAME;
    const int LOGGED_IN_USER_ID;
    IncomesFile incomesFile;
    void printIncome(Income income);


public:
    IncomesManager (string incomesFileName, int loggedInUserId) : LOGGED_IN_USER_ID (loggedInUserId), INCOMES_FILE_NAME(incomesFileName), incomesFile(incomesFileName) {
        incomes = incomesFile.loadLoggedInUserIncomes(LOGGED_IN_USER_ID);
    }
    void addIncome();
    Income getNewIncomeData();
    void printAllIncomes();




};



#endif // INCOMESMANAGER_H
