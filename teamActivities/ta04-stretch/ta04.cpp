// CS165 Team Activity 04 - Stretch
// Written by Chad Macbeth

#include <iostream>
#include <string>
using namespace std;

#include "rational.h"

// Test Driver
int main()
{
   Rational r;

   r.prompt();
   r.display();
   r.displayDecimal();

   Rational r2;

   cout << endl;
   r2.prompt();
   r.multiplyBy(&r2); // Send the address of the r2 object
   r.display();

   r.reduce();
   r.display();

   return 0;
}
