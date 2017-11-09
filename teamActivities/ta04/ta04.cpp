/***************************************************************
 * File: ta04.cpp
 * Author: Chad Macbeth 
 * Purpose: Contains the main function to test the Rational class.
 ***************************************************************/

#include <iostream>
#include <string>
using namespace std;

#include "rational.h"

int main()
{
   Rational r;

   r.prompt();
   r.display();
   r.displayDecimal();

   Rational r2;

   cout << endl;
   r2.prompt();
   r.multiplyBy(&r2);
   r.display();

   r.reduce();
   r.display();

   return 0;
}
