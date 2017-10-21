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
      Rewards();
      Rewards(int miles);
      int getMiles() const;
      void setMiles(int miles);
      bool getGoldStatus() const;
};

#endif

