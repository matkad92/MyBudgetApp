#include "Money.h"

void Money::setUserId(int newId) {
    if (newId >= 0) userId = newId;
}

void Money::setDate(string newDate) {
    DateOperations dateOperation;
    if (dateOperation.checkDateFormat(newDate) == true) {
        date = dateOperation.getCorrectDateString();
        dateToSort = dateOperation.getDateToSort();
    } else cout << "Date can not be set.";
}


void Money::setItem(string newItem) {
    item = newItem;
}

void Money::setAmount(double newAmount) {
    amount = newAmount;
}

int Money::getUserId() {
    return userId;
}

string Money::getDate() {
    return date;
}

int Money::getDateToSort() {
    return dateToSort;
}

string Money::getItem() {
    return item;
}

double Money::getAmount() {
    return amount;
}

