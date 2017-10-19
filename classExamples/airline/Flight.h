// Class: Flight
//
// Implementaiton: Flight.cpp
//
// Purpose: Contain all data and functions related to each airline
// flight that is scheduled.  Airlines must create objects of 
// this class before passengers can be booked on flights.  Cost
// information is the base cost.

#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>

using namespace std;

class Flight
{
   private:
      string id;
      int miles;
      float cost;

   public:
      // Constructors
      Flight();
      Flight(string id, int miles, float cost);

      // Accessors
      string getID() const;
      int getMiles() const;
      float getCost() const;

      // Mutators
      void setID(string id);
      void setMiles(int miles);
      void setCost(float cost);

      // Other Functions
      void display() const;
};

#endif
