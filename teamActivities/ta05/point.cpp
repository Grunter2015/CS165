// CS165 Team Activity 05 - Stretch
// Written by Chad Macbeth

#include "point.h"
#include <iostream>
using namespace std;

// Initialize Point object with default values
Point::Point()
{
   setX(5);
   setY(5);
}

// Initialize Point object with user defined values
Point::Point(const int x, const int y)
{
   setX(x);
   setY(y);
}

// Mutator: x
// Validation: Must be within [1,10]
// Error Checking: Limit to the valid range
void Point::setX(const int x)
{
   if (x < 1)
   {
      this->x = 1;
   }
   else if (x > 10)
   {
      this->x = 10;
   }
   else
   {
      this->x = x;
   }
}

// Mutator: y
// Validation: Must be within [1,10]
// Error Checking: Limit to the valid range
void Point::setY(int y)
{
   if (y < 1)
   {
      this->y = 1;
   }
   else if (y > 10)
   {
      this->y = 10;
   }
   else
   {
      this->y = y;
   }
}


/******************************************
 * Function: display
 * Purpose: Displays the point
 ******************************************/
void Point :: display() const
{
   // Note: We could just use x and y here and not the getters
   // because it's a member function. But this will force you
   // to deal with const :-)...

   cout << "(" << getX() << ", " << getY() << ")";
}


