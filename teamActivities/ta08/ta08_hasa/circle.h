#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

class Circle
{
   private:
      Point point;
      float radius;

   public:
      void promptForCircle();
      void display() const;
      float getX() const;
      float getY() const;
      void setX(float x);
      void setY(float y);
};

#endif
