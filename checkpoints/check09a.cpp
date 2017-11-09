/***********************************************************************
* Program:
*    Checkpoint 09a, Virtual Functions
*    Brother {Burton, Falin, Ercanbrack}, CS165
* Author:
*    your name
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

// For this assignment, for simplicity, you may put all of your classes
// in this file.

class Car
{
   protected:
      string name;

   public:
      Car();
      string getName() const;
      void setName(string name);
      virtual string getDoorSpecs() const;
};

class Civic : public Car
{
   public:
      Civic();
      string getDoorSpecs() const;
};

class Odyssey : public Car
{
   public:
      Odyssey();
      string getDoorSpecs() const;
};

class Ferrari : public Car 
{
   public:
      Ferrari();
      string getDoorSpecs() const;
};

Car::Car()
{
   setName("Unknown Model");
}

string Car::getName() const
{
   return name;
}

void Car::setName(string name)
{
   this->name = name;
}

string Car::getDoorSpecs() const
{
   return "Unknown doors";
}

Civic::Civic()
{
   setName("Civic");
}

string Civic::getDoorSpecs() const
{
   return "4 doors";
}

Odyssey::Odyssey()
{
   setName("Odyssey");
}

string Odyssey::getDoorSpecs() const
{
   return "2 front doors, 2 sliding doors, 1 tail gate";
}

Ferrari::Ferrari()
{
   setName("Ferrari");
}

string Ferrari::getDoorSpecs() const
{
   return "2 butterfly doors";
} 

/**********************************************************************
 * Function: attachDoors
 * Purpose: This function can accept any type of Car object. It will
 *  call the appropriate functions to display the name and the doors info.
 ***********************************************************************/

void attachDoors(Car &car)
{
   cout << "Attaching doors to " << car.getName();
   cout << " - " << car.getDoorSpecs();
   cout << endl;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // You should not change main

   Civic civic;
   Odyssey odyssey;
   Ferrari ferrari;

   attachDoors(civic);
   attachDoors(odyssey);
   attachDoors(ferrari);

   return 0;
}


