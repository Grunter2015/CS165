// CS165 Team Activity 05 - Stretch
// Written by Chad Macbeth

#ifndef POINT_H
#define POINT_H

class Point
{
   private:
      int x;
      int y;

   public:
      Point();
      Point(const int x, const int y);
      void display() const;
      int getX() const { return x; }
      int getY() const { return y; }
      void setX(const int x);
      void setY(const int y); 

};

#endif
