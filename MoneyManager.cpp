#include "MoneyManager.h"

void MoneyManager::addIncome() {
    incomesManager.addIncome();
}

void MoneyManager::printAllIncomes() {
    incomesManager.printAllIncomes();
}

void MoneyManager::addExpense() {
    expensesManager.addExpense();
}

void MoneyManager::printAllExpenses() {
    expensesManager.printAllExpenses();
}
