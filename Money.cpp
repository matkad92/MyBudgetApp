#include "Money.h"

void Money::setId(int newId) {
    if (newId >= 0) userId = newId;
}

void Money::setDate(string newDate) {
    date = newDate;
}

void Money::calculateDateToSort() {/////////////////////////////

}

void Money::setItem(string newItem) {
    item = newItem;
}

void Money::setAmount(float newAmount) {
    amount = newAmount;
}

int Money::getId() {
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

float Money::getAmount() {
    return amount;
}

