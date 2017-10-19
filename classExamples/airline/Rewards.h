// Class: Rewards
//
// Implementation: Rewards.cpp
//
// Purpose: All data and funtions related to a rewards program
// for a passenger.  

#ifndef REWARDS_H
#define REWARDS_H 

using namespace std;

class Rewards 
{
   private:
      int miles;

   public:
      // Constructors
      Rewards();
    
      // Accessors
      int getMiles() const;

      // Mutators
      void setMiles(int miles);
};

#endif

