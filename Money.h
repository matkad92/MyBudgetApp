#ifndef MONEY_H
#define MONEY_H


#include <iostream>

using namespace std;

class Money {

    int userId;
    string date;
    int dateToSort;
    string item;
    float amount;

public:

    void setId( int newId);
    void setDate( string newDate);
    void calculateDateToSort();
    void setItem( string newItem);
    void setAmount( float newAmount);

    int getId();
    string getDate();
    int getDateToSort();
    string getItem();
    float getAmount();


};

#endif // MONEY_H
