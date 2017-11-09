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
   Robot(int energy);
   Robot(Point position, int energy);
   void display() const;
   int getEnergy() const;
   Point getPosition() const;
   void setEnergy(int energy);
   void setPosition(Point position);
   void moveUp();
   void moveDown();
   void moveLeft();
   void moveRight();
   void fireLaser();

private:
   void setMines();
   bool onMine();

};

#endif
