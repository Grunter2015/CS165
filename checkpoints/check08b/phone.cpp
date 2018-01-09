// CS165 Checkpoint 08B
// Written by Chad Macbeth

#include <iostream>
#include "phone.h"

using namespace std;

// Prompt the user for the 3 parts of the phone number
void Phone::promptNumber()
{
   cout << "Area Code: ";
   cin >> areaCode;
   cout << "Prefix: ";
   cin >> prefix;
   cout << "Suffix: ";
   cin >> suffix;
}

// Display the phone number
void Phone::display() const
{
   cout << "(" << areaCode << ")" << prefix << "-" << suffix << endl;
}

