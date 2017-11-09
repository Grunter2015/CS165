/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "money.h"

/*****************************************************************
 * Function: prompt
 * Purpose: Asks the user for values for dollars and cents
 *   and stores them.
 ****************************************************************/
void Money :: prompt()
{
   int dollars;
   int cents;

   cout << "Dollars: ";
   cin >> dollars;

   cout << "Cents: ";
   cin >> cents;

   setDollars(dollars);
   setCents(cents);
}

/*****************************************************************
 * Function: display
 * Purpose: Displays the value of the money object.
 ****************************************************************/
void Money :: display() const 
{
   cout << "$" << getDollars() << ".";
   cout << setfill('0') << setw(2) << getCents();
}

/* Inline Option 3 */
inline int Money::getDollars() const
{
   return dollars;
}

inline int Money::getCents() const
{
   return cents;
}

void Money::setDollars(int dollars)
{
   if (dollars >= 0)
   { 
      this->dollars = dollars;
   }
   else
   {
      this->dollars = dollars * -1;
   }
}

void Money::setCents(int cents)
{
   if (cents >= 0)
   {
      this->cents = cents;
   }
   else
   {
      this->cents = cents * -1;
   }
}


