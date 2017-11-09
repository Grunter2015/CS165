#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

class Circle : public Point
{
   private:
      float radius;

   public:
      void promptForCircle();
      void display() const;
};

#endif
