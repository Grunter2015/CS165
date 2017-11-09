/***********************************************************************
* File: date.cpp
* Purpose: Implementation of Methods for the Date Class
************************************************************************/

#include <iostream>
#include "date.h"
using namespace std;

void Date::set(int month, int day, int year)
{
   this->month = month;
   this->day = day;
   this->year = year;
}

void Date::displayAmerican() const
{
   cout << month << "/" << day << "/" << year << endl;
}

void Date::displayEuropean() const
{
   cout << day << "/" << month << "/" << year << endl;
}

void Date::displayISO() const
{
   cout << year << "-" << month << "-" << day << endl;
}


