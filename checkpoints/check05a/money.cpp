// CS165 Checkpoing 5B
// Written by Chad Macbeth

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

// Mutator: dollars
// Validation: Must be a positive number >= 0
// Error Handling: Take the absolute value
void Money::setDollars(const int dollars)
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

// Mutator: cents
// Validation: Must be a positive number >= 0
// Error Handling: Take the absolute value
void Money::setCents(const int cents)
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


