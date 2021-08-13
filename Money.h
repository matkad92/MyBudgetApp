#ifndef MONEY_H
#define MONEY_H


#include <iostream>

using namespace std;

class Money {

    int userId;
    string date;
    int dateToSort;
    string item;
    double amount;
    void calculateDateToSort();


public:

    void setUserId( int newId);
    void setDate( string newDate);

    void setItem( string newItem);
    void setAmount(double newAmount);
    int getUserId();
    string getDate();
    int getDateToSort();
    string getItem();
    double getAmount();


};

#endif // MONEY_H
