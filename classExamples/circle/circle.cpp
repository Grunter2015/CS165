/***********************************************************************
* Program:
*    Classroom Example
*    Brother Macbeth, CS165
* Author:
*    Chad Macbeth
* Summary: 
*    Implementation for the circle class.
*************************************************************************/
#include <iostream>
#include "circle.h"

using namespace std;

/*******************************************
 * Calculate the area of the circle and 
 * return.
 * ****************************************/
float Circle::getArea()
{
   return (3.14 * radius * radius);
}

/******************************************
 * Return the radius
 * ***************************************/
float Circle::getRadius()
{
   return radius;
}

/*****************************************
 * Set the radius
 * **************************************/
void Circle::setRadius(float value)
{
   radius = value;
}


