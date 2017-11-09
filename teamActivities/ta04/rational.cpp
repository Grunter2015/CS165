/***************************************************************
 * File: rational.cpp
 * Author: Chad Macbeth 
 * Purpose: Contains the method implementations for the Rational class.
 ***************************************************************/

#include <iostream>
#include "rational.h"

using namespace std;

void Rational::prompt()
{
   cout << "Top: ";
   cin >> top;
   cout << "Bottom: ";
   cin >> bottom;
}

void Rational::display() const
{
   if (top > bottom)
   {
      int wholeNum = top / bottom;
      int newTop = top % bottom;
      cout << wholeNum << " " << newTop << "/" << bottom << endl;
   }
   else 
   { 
      cout << top << "/" << bottom << endl;
   }
}

void Rational::displayDecimal() const
{
   float decimal = (float) top / (float) bottom;
   cout << decimal << endl;
}

void Rational::multiplyBy(Rational *r)
{
   top = top * r->top;
   bottom = bottom * r->bottom;
}

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





