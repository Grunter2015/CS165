#include <iostream>
#include "circle.h"

using namespace std;

void Circle::promptForCircle()
{
   point.promptForPoint();
   cout << "Enter radius: ";
   cin >> radius;
}

void Circle::display() const
{
   point.display();
   cout << " - Radius: " << radius << endl;
}

float Circle::getX() const
{
   return point.getX();
}

float Circle::getY() const
{
   return point.getY();
}

void Circle::setX(float x)
{
   point.setX(x);
}

void Circle::setY(float y)
{
   point.setY(y);
}
