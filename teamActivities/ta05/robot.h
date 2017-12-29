#ifndef ROBOT_H
#define ROBOT_H

#include "point.h"

class Robot
{
   private:
      Point position;
      int energy;
      Point mines[3];

   public:
      Robot();
      Robot(const int energy);
      Robot(const Point &position, const int energy);
      void display() const;
      int getEnergy() const { return energy; }
      Point getPosition() const { return position; }
      void setEnergy(const int energy);
      void setPosition(const Point &position) { this->position = position; }
      void moveUp();
      void moveDown();
      void moveLeft();
      void moveRight();
      void fireLaser();

   private:
      void setMines();
      bool onMine() const;

};

#endif
