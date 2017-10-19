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
      Trip();
      Trip(Passenger passenger, Flight flight);
      Passenger getPassenger() const;
      Flight getFlight() const;
      void setPassenger(Passenger passenger);
      void setFlight(Flight flight);
      void display() const;
};

#endif
      
