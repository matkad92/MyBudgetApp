#include "IncomesManager.h"

void IncomesManager::addIncome() {

    Income income;

    system ("cls");
    cout << " >>> ADDING NEW INCOME <<< " << endl;
    income = getNewIncomeData ();
    incomes.push_back(income);

    incomesFile.addIncomeToFile(income);
    cout << endl << "Income has been added successfully."<< endl << endl;
    system("pause");
    cout << endl;

}

Income IncomesManager::getNewIncomeData () {

    Income income;
    income.setIncomeId((incomesFile.getLastIncomeId()+1));
    income.setUserId(LOGGED_IN_USER_ID);

    cout << " Enter income name: ";
    income.setItem(UnasignedMethods::takeLine());

    cout << " Enter the amount: ";///////////////////////////dodac zamiane kropki na przecinek
    income.setAmount(atof(UnasignedMethods::takeLine().c_str()));

    cout << " Enter income date in format yyyy-mm-dd : "; /////////////////////////dodac sprawdzenie formatu daty w setterze oraz zapytac, czy uzytkownik chce z dzisiejsza data czy z inna
    income.setDate(UnasignedMethods::takeLine());

    return income;
}

void IncomesManager::printAllIncomes() {

    system("cls");
    if(!incomes.empty()) {
        cout << "            >>>INCOMES<<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector<Income>::iterator itr = incomes.begin(), VecEnd = incomes.end(); itr!= VecEnd; itr++) {
            printIncome(*itr);
        }
        cout << endl;
    } else {
        cout << endl << "There are no incomes."<< endl << endl;
    }
    getch();
}

void IncomesManager::printIncome(Income income) {

    cout << endl << "Income Id:                 " << income.getIncomeId() << endl;
    cout << "UserId:               " << income.getUserId() << endl;
    cout << "Income name:           " << income.getItem() << endl;
    cout << "Income amount:           " << income.getAmount() << endl;
    cout << "Date:     " << income.getDate() << endl;
    cout << "Date to sort:              " << income.getDateToSort() << endl;
}
