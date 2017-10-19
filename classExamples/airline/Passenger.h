// Class: Passenger
//
// Implementation: Passenger.cpp
//
// Purpose: All data and functions related to a passenger.  Includes
// access to rewards data linked to the passenger.  Airlines must
// create a passenger object before they can be booked on a flight.

#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include "Rewards.h"

using namespace std;

class Passenger 
{
   private:
      string name;
      Rewards rewards;
      
   public:
      // Constructors
      Passenger();
      Passenger(string name);

      // Accessors
      string getName() const;
      Rewards getRewards() const;

      // Mutators
      void setName(string name);
      void setRewards(Rewards rewards);

      // Other Functions
      void display() const;
};

#endif

