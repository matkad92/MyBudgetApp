#ifndef EXPENSESMANAGER_H
#define EXPENSESMANAGER_H

#include <iostream>
#include <vector>
#include "Expense.h"
#include "ExpensesFile.h"

using namespace std;

class ExpensesManager {
    vector <Expense> expenses;
    const string EXPENSES_FILE_NAME;
    const int LOGGED_IN_USER_ID;
    ExpensesFile expensesfile;

public:
    ExpensesManager (string expensesFileName, int loggedInUserId) : LOGGED_IN_USER_ID (loggedInUserId), EXPENSES_FILE_NAME(expensesFileName){
        //wczytywanie do pamieci wydatkow
    };

};


#endif // EXPENSESMANAGER_H
