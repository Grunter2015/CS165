#include <iostream>
#include "Trip.h"

using namespace std;

// Default Constructor
// All member data to set to defaults
Trip::Trip()
{
}

// Non Default Constructor
// All member data set to values provided by object owner
Trip::Trip(Passenger passenger, Flight flight)
{
   setPassenger(passenger);
   setFlight(flight);
}

// Accessor: passenger
Passenger Trip::getPassenger() const
{
   return passenger;
}

// Accessor: flight
Flight Trip::getFlight() const
{
   return flight;
}

// Mutator: passenger
// Validation: none
// Error Handling: none
void Trip::setPassenger(Passenger passenger)
{
   this->passenger = passenger;
}

// Mutator: flight
// Validation: none
// Error Handling: none
void Trip::setFlight(Flight flight)
{
   this->flight = flight;
}

// Display all information relevant to the trip
void Trip::display() const
{
   cout << endl;
   passenger.display();
   flight.display();
   cout << "--------------------------" << endl;
}
      
