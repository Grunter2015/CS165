// CS165 Checkpoint 04B
// Written by Chad Macbeth

#include <iostream>
#include "date.h"
using namespace std;

int main()
{
   Date date;
   int month = 0;
   int day = 0;
   int year = 0;

   // Prompt for the date
   cout << "Month: ";
   cin >> month;
   cout << "Day: ";
   cin >> day;
   cout << "Year: ";
   cin >> year;

   // Set the date object with the values obtained from the user.
   date.set(month, day, year);   

   // Display the date in all 3 formats.
   cout << endl;
   date.displayAmerican();
   date.displayEuropean();
   date.displayISO();

   return 0;
}


