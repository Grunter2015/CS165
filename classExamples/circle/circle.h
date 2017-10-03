/***********************************************************************
* Program:
*    Classroom Example
*    Brother Macbeth, CS165
* Author:
*    Chad Macbeth
* Summary:
*    Interface for the circle class.
*************************************************************************/

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

using namespace std;

class Circle
{
   private:
      float radius;

   public:
      float getArea();
      float getRadius();
      void  setRadius(float value);
};

#endif

