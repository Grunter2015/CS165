#include "robot.h"
#include <iostream>
using namespace std;

Robot::Robot()
{
   setEnergy(100);
   setMines();
}

Robot::Robot(int energy)
{
   setEnergy(energy);
   setMines();
}

Robot::Robot(Point position, int energy)
{
   setEnergy(energy);
   setPosition(position);
   setMines();
}

/************************************
 * Function: Display
 * Purpose: Displays the robot.
 ************************************/
void Robot :: display() const
{
   position.display();
   cout << " - Energy: " << getEnergy();
}

inline int Robot::getEnergy() const
{
   return energy;
}

inline Point Robot::getPosition() const
{
   return position;
}

void Robot::setEnergy(int energy)
{
   if (energy < 0)
   {
      this->energy = 0;
   }
   else
   {
      this->energy = energy;
   }
}

void Robot::setPosition(Point position)
{
   this->position = position;
}

void Robot::moveUp()
{
   if (energy >= 10)
   {
      position.setY(position.getY() - 1);
      if (onMine())
      {
         cout << "You hit a mine." << endl;
         setEnergy(0);
      }
      else
      {
         setEnergy(energy - 10);
      }
   }
   else
   {
      cout << "Not enough energy to move." << endl;
   }
}

void Robot::moveDown()
{
   if (energy >= 10)
   {
      position.setY(position.getY() + 1); 
      if (onMine())
      {
         cout << "You hit a mine." << endl;
         setEnergy(0);
      }
      else
      {
         setEnergy(energy - 10);
      }
   }
   else
   {
      cout << "Not enough energy to move." << endl;
   }
}

void Robot::moveRight()
{
   if (energy >= 10)
   {
      position.setX(position.getX() + 1);
      if (onMine())
      {
         cout << "You hit a mine." << endl;
         setEnergy(0);
      }
      else
      {
         setEnergy(energy - 10);
      }
   }
   else
   {
      cout << "Not enough energy to move." << endl;
   }
}

void Robot::moveLeft()
{
   if (energy >= 10)
   {
      position.setX(position.getX() - 1);
      if (onMine())
      {
         cout << "You hit a mine." << endl;
         setEnergy(0);
      }
      else
      {
         setEnergy(energy - 10);
      }
   }
   else
   {
      cout << "Not enough energy to move." << endl;
   }
}

void Robot::fireLaser()
{
   if (energy >= 25)
   {
      cout << "Pew! Pew!" << endl;
      if (onMine())
      {
         cout << "You hit a mine." << endl;
         setEnergy(0);
      }
      else
      {
         setEnergy(energy - 10);
      }
   }
   else
   {
      cout << "Not enough energy to fire." << endl;
   }
}

void Robot::setMines()
{
   mines[0] = Point(3,3);
   mines[1] = Point(4,4);
   mines[2] = Point(6,6);
}

bool Robot::onMine()
{ 
   for (int i=0; i<3; i++)
   {
      if ((mines[i].getX() == position.getX()) && 
          (mines[i].getY() == position.getY()))
      {
         return true;
      }
   }
   return false;
}

