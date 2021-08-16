#ifndef DATEOPERATIONS_H
#define DATEOPERATIONS_H

#include <iostream>
#include <time.h>

#include "UnasignedMethods.h"

using namespace std;

class DateOperations {

    string correctDateString;
    int dateToSort;
    int dayPerMonth (int year, int numberOfMonth);
    string takeNewDateToCheck();


public:
    static string getSystemDate();
    bool checkDateFormat(string checkedDate);
    int getDateToSort();
    string getCorrectDateString ();

};
#endif // DATEOPERATIONS_H

