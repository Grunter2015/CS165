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
      Flight();
      Flight(string id, int miles, float cost);
      string getID() const;
      int getMiles() const;
      float getCost() const;
      void setID(string id);
      void setMiles(int miles);
      void setCost(float cost);
      void display() const;
};

#endif
