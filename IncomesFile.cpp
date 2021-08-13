#include "IncomesFile.h"

int IncomesFile::getLastIncomeId() {
    return lastIncomeId;
}

void IncomesFile::addIncomeToFile(Income income) {
    CMarkup incomes;
    bool fileExists = incomes.Load(INCOMES_FILE_NAME);//zwraca true gdzy plik udalo sie otworzyc

    if (!fileExists) {
        incomes.SetDoc("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n");
        incomes.AddElem("Incomes");//dodaje element na pozycji glownej
    }

    incomes.FindElem();//przestawia glowna pozycje na "rodzenstwo"
    incomes.IntoElem();//ustawia galaz jako glowna , na ktorej mozna pracowac
    incomes.AddElem("Income");
    incomes.IntoElem();
    incomes.AddElem("IncomeId", income.getIncomeId());
    incomes.AddElem("UserId", income.getUserId());
    incomes.AddElem("IncomeName", income.getItem());
    incomes.AddElem("Amount", income.getAmount());
    incomes.AddElem("Date", income.getDate());
    incomes.AddElem("DateToSort", income.getDateToSort());

    incomes.Save(INCOMES_FILE_NAME);
}

