#include "DateOperations.h"

string DateOperations::getSystemDate() {

    time_t localTime;
    struct tm * ptr;
    time( & localTime );
    ptr = localtime( & localTime );

    string date;
    string year = to_string(ptr->tm_year+1900);
    string month = to_string(ptr->tm_mon+1);
    string day = to_string(ptr->tm_mday);
    if (ptr->tm_mon < 10) {
        date = year + "-0" + month + "-" + day;
    } else {
        date = year + "-" + month + "-" + day;
    }
    return date;
}

bool DateOperations::checkDateFormat(string checkedDate) {

    bool isCorrect =  false;
    string dateDayString ;
    string dateMonthString ;
    string dateYearString ;

    int dateDayInt;
    int dateMonthInt;
    int dateYearInt;

    time_t localTime;
    struct tm * ptr;
    time( & localTime );
    ptr = localtime( & localTime );

    while (1)
    {
        if (checkedDate.length() == 10)
        {
            if (checkedDate[4] == '-' && checkedDate[7] == '-' && isdigit(checkedDate[0]) && isdigit(checkedDate[1]) && isdigit(checkedDate[2])
            && isdigit(checkedDate[3]) && isdigit(checkedDate[5]) && isdigit(checkedDate[6]) && isdigit(checkedDate[8]) && isdigit(checkedDate[9]) )
            {
                dateDayString = checkedDate.substr(8,2);
                dateMonthString = checkedDate.substr(5,2);
                dateYearString = checkedDate.substr(0,4);
                dateDayInt = atoi(dateDayString.c_str());
                dateMonthInt = atoi(dateMonthString.c_str());
                dateYearInt = atoi(dateYearString.c_str());


                if ((dateYearInt >= 2000 && dateYearInt < (ptr->tm_year+1900) && dateMonthInt <= 12) )
                {
                    if  (dateDayInt <= dayPerMonth(dateYearInt, dateMonthInt))
                    {
                        correctDateString = checkedDate;
                        dateToSort = dateYearInt * 10000 + dateMonthInt * 100 + dateDayInt;
                        return true;
                    }

                    else
                    {
                        checkedDate = takeNewDateToCheck();
                    }
                }
                else if (dateYearInt == (ptr->tm_year+1900) && dateMonthInt <= (ptr->tm_mon+1))
                {
                    if  (dateMonthInt < (ptr->tm_mon+1) && dateDayInt <= dayPerMonth(dateYearInt, dateMonthInt))
                    {
                        correctDateString = checkedDate;
                        dateToSort = dateYearInt * 10000 + dateMonthInt * 100 + dateDayInt;
                        return true;
                    }

                    else if (dateMonthInt == (ptr->tm_mon+1) && dateDayInt <= ptr->tm_mday)
                    {
                        correctDateString = checkedDate;
                        dateToSort = dateYearInt * 10000 + dateMonthInt * 100 + dateDayInt;
                        return true;
                    }
                    else
                    {
                        checkedDate = takeNewDateToCheck();
                    }
                }
                else
                {
                    checkedDate = takeNewDateToCheck();
                }

            }
            else
            {
                checkedDate = takeNewDateToCheck();
            }

        }
        else
        {
            checkedDate = takeNewDateToCheck();
        }
    }
    return false;
}

int DateOperations::dayPerMonth (int year, int numberOfMonth)
{
    if ((numberOfMonth==1)||(numberOfMonth==3)||(numberOfMonth==5)||
            (numberOfMonth==7)||(numberOfMonth==8)||(numberOfMonth==10)||
            (numberOfMonth==12))
        return 31;

    else if ((numberOfMonth==4)||(numberOfMonth==6)||(numberOfMonth==9)||
             (numberOfMonth==11))
        return 30;

    else if (numberOfMonth==2)
    {
        if (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))
             return 29;
        else return 28;
    }
}

string DateOperations::takeNewDateToCheck()
{
    string newDate;
    cout << "Date format is wrong, try again using yyyy-mm-dd format, starting from 2000-01-01.";
    cout << endl << "Date: ";
    cin.sync();
    cin >> newDate ; //zamienic na UnasignedMethods.getline
    return newDate;
}

string DateOperations::getCorrectDateString () {
    return correctDateString;
}

int DateOperations::getDateToSort() {
    return dateToSort;
}

