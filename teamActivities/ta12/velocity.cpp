#include "velocity.h"

#include <iostream>
using namespace std;

void Velocity :: prompt()
{
   cout << "dx: ";
   cin >> dx;

   cout << "dy: ";
   cin >> dy;
}

void Velocity :: display() const 
{
   cout << "(dx=" << dx << ", dy=" << dy << ")";
}

// Add one to both components of current object.  Return updated object
Velocity& Velocity::operator ++()
{
   setDx(dx + 1);
   setDy(dy + 1);
   return *this;
}
  
// Add one to both components of current object.  Return object before it was updated (not &) 
Velocity Velocity::operator ++(int postfix)
{
   Velocity old = *this;
   setDx(dx + 1);
   setDy(dy + 1);
   return old;
}


