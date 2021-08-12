#ifndef MONEYMANAGER_H
#define MONEYMANAGER_H

#include <iostream>

#include "ExpensesManager.h"
#include "IncomesManager.h"

using namespace std;

class MoneyManager {
    const int LOGGED_IN_USER_ID;

    ExpensesManager expensesManager;
    IncomesManager incomesManager;


public:
    MoneyManager (string expensesFileName, string incomesFileName, int loggedInUserId) : LOGGED_IN_USER_ID (loggedInUserId), expensesManager(expensesFileName, loggedInUserId), incomesManager(incomesFileName, loggedInUserId) {
    };


};


#endif // MONEYMANAGER_H
