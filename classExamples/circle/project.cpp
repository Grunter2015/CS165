/***********************************************************************
* Program:
*    Classroom Example
*    Brother Macbeth, CS165
* Author:
*    Chad Macbeth
* Summary:
*    Create a circle object and demonstrate how it is used.
*************************************************************************/

#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
   Circle c;  // Creates an object of type Circle

   c.setRadius(1.4);
   cout << "Radius = " << c.getRadius() << endl;
   cout << "Area = " << c.getArea() << endl;

   return 0;
}
