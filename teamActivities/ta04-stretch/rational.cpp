// CS165 Team Activity 4 - Stretch
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

// Display the rational number.  If an improper fraction,
// then convert to mixed fraction first. 
void Rational::display() const
{
   if (top > bottom)
   {
      // Improper Fraction.
      // Perform integer division to get the whole number
      int wholeNum = top / bottom;
      // Do modulo to get the remainder which will be the new numerator
      int newTop = top % bottom;
      cout << wholeNum << " " << newTop << "/" << bottom << endl;
   }
   else 
   { 
      cout << top << "/" << bottom << endl;
   }
}

// Display the rational number as a decimal
void Rational::displayDecimal() const
{
   // Need to convert the integers to floats to make sure 
   // float division is performed. This is called casting. 
   float decimal = (float) top / (float) bottom;
   cout << decimal << endl;
}

// Multiply the rational number by a user supplied rational number.  
void Rational::multiplyBy(const Rational &r)
{
   top = top * r.top; 
   bottom = bottom * r.bottom;
}

// Reduce a fraction by finding the greatest common divisor (gcd).
// This function **will** change the member data.
void Rational::reduce()
{
   // Starting with the bottom number find a the greatest
   // common divisor (gcd).  Divide top and bottom by the 
   // the gcd.  Break from the loop when the gcd is found.
   // when the gcd is found.
   for (int i=bottom; i>1; i--)
   {
      if (((top % i) == 0) && ((bottom % i) == 0))
      {
         top = top / i;
         bottom = bottom / i;
         break;
      }
   }
} 





