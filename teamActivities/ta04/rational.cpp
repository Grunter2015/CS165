// CS165 Team Activity 4 
// Written by Chad Macbeth

#include <iostream>
#include "rational.h"

using namespace std;

// Prompt the user for the components of a rational number
void Rational::prompt()
{
   cout << "Top: ";
   cin >> top;
   cout << "Bottom: ";
   cin >> bottom;
}

// Display the rational number. 
void Rational::display() const
{
   cout << top << "/" << bottom << endl;
}

// Display the rational number as a decimal
void Rational::displayDecimal() const
{
   // Need to convert the integers to floats to make sure 
   // float division is performed. This is called casting. 
   float decimal = (float) top / (float) bottom;
   cout << decimal << endl;
}






