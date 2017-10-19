// Class: Trip
//
// Implementation: Trip.cpp
//
// Purpose: All data and functions related to a booked airline trip.
// The airline must provide a passenger and flight object to book 
// a trip.

#ifndef TRIP_H
#define TRIP_H

#include "Passenger.h"
#include "Flight.h"

using namespace std;

class Trip
{
   private:
      Passenger passenger;
      Flight flight;

   public:
      // Constructors
      Trip();
      Trip(Passenger passenger, Flight flight);
   
      // Accessors
      Passenger getPassenger() const;
      Flight getFlight() const;

      // Mutators
      void setPassenger(Passenger passenger);
      void setFlight(Flight flight);

      // Other Functions
      void display() const;
};

#endif
      
