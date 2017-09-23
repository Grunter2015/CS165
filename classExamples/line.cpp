#include <iostream>
#include <math.h>

using namespace std;

struct Point
{
   double x;
   double y;
};

struct Line
{
   Point p1;
   Point p2;
   int color;
};


double getLength(Line &line)
{
    // Formula is sqrt((x2 - x1)^2 + (y2 - y1)^2)

   double delta_x = line.p2.x - line.p1.x;
   double delta_y = line.p2.y - line.p1.y;
   double length = sqrt(delta_x * delta_x + delta_y * delta_y);

   return length;
}


int main()
{
   Point a;
   Point b;
   Line l;

   a.x = 3;
   a.y = 4;

   b.x = 7;
   b.y = 10;

   l.p1 = a;
   l.p2 = b;
   l.color = 0xFF0000;  // This is the RGB code for Red

   cout << "Length = " << getLength(l) << endl;

   return 0;
}
