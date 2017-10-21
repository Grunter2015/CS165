#include <iostream>
#include "Trip.h"
#include "Passenger.h"
#include "Flight.h"

using namespace std;


// The purpose of main is to provide a driver to test
// the Passenger, Flight, and Trip classes.
int main()
{
   // Create Passengers and Flight
   Passenger p1("George Washington",99999);
   Passenger p2("Winston Churchill",200000);
   Flight f1("DL123", 1210, 430.21);
   Flight f2("AA592", 798, 394.20);
   Flight f3("BA321", 1608, 760.12);

   // Create Trips out of the Passengers and Flights
   Trip t1(p1, f1); // George going on Delta
   Trip t2(p1, f2); // George going on American
   Trip t3(p2, f1); // Winston going on British Air

   // Disply the Trip Details
   t1.display();
   t2.display();
   t3.display();

   return 0;
}

   

   
   
