#include <iostream>
#include "Flight.h"

using namespace std;

// Default Constructor
// All member data set to default values
Flight::Flight()
{
   setID("?????");
   setMiles(0);
   setCost(0.0);
}

// Non-Default Constructor
// All member data set by object owner 
Flight::Flight(string id, int miles, float cost)
{
   setID(id);
   setMiles(miles);
   setCost(cost);
}

// Accessor: id 
string Flight::getID() const
{
   return id;
}

// Accessor: miles
int Flight::getMiles() const
{
   return miles;
}

// Accessor: cost
float Flight::getCost() const
{
   return cost;
}

// Mutator: id
// Validation: none
// Error Handling: none
void Flight::setID(string id)
{
   this->id = id;
}

// Mutator: miles
// Validation: must be positive
// Error Handling: do not update data
void Flight::setMiles(int miles)
{
   if (miles < 0)
   {
      cout << "Invalid miles for flight.  No changes made." << endl;
   }
   else
   {
      this->miles = miles;
   }
}

// Mutator: cost 
// Validation: must be positive
// Error Handling: do not update data
void Flight::setCost(float cost)
{
   if (cost < 0)
   {
      cout << "Invalid cost for flight.  No change made." << endl;
   }
   else
   {
      this->cost = cost;
   }
} 

// Display the flight details.  Cost is not displayed because
// it may vary by passenger.
void Flight::display() const
{
   cout << "Flight ID: " << id << endl;
   cout << "Flight Miles: " << miles << endl;
}
