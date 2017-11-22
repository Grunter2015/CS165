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

/*****************************************************************
 * Function: handleOverflow
 * Purpose: Checks if cents is greater than 100, and if so, rolls
 *   that amount over to dollars.
 ****************************************************************/
void Money :: handleOverflow()  
{
   if (cents >= 100)
   {
      dollars += cents / 100;
      cents = cents % 100;
   }
}

// Add the current Money object to another Money object
// resulting is a new Money object
Money Money::operator +(const Money &rhs) const
{
   Money result;
   result.setDollars(dollars + rhs.getDollars());
   result.setCents(cents + rhs.getCents());
   result.handleOverflow();
   return result;
}

// Update the current Money object with another Money 
// object.  Return pointer to current Money object.
Money& Money::operator +=(const Money &rhs)
{
   setDollars(dollars + rhs.getDollars());
   setCents(cents + rhs.getCents());
   handleOverflow();
   return *this;
}

// Update current Money object.  Return point to current
// Money object.
Money& Money::operator ++()
{
   setCents(cents + 1);
   handleOverflow();
   return *this;
}

