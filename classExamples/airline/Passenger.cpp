#include <iostream>
#include "Passenger.h"

using namespace std;

// Default Constructor
// All member data set to default values
Passenger::Passenger()
{
   setName("Unknown");
}

// Non-Default Constructor
// Name is set to value provided by object owner
// Rewards is set to default values
Passenger::Passenger(string name)
{
   setName(name);
}

// Accessor: name
string Passenger::getName() const
{
   return name;
}

// Accessor: rewards
Rewards Passenger::getRewards() const
{
   return rewards;
}

// Mutator: name
// Validation: none
// Error Handling: none
void Passenger::setName(string name)
{
   this->name = name;
}

// Mutator: rewards
// Validation: none
// Error Handling: none
void Passenger::setRewards(Rewards rewards)
{
   this->rewards = rewards;
}

// Display passenger information including rewards
void Passenger::display() const
{
   cout << "Passenger Name: " << name << endl;
   cout << "Rewards Miles: " << rewards.getMiles() << endl;
}

