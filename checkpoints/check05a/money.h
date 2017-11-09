/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
   int dollars;
   int cents;

public:
   void prompt();
   void display() const;
   int getDollars() const;
   int getCents() const;
/* Inline Option 1 
   int getDollars() const
   {
      return dollars;
   }

   int getCents() const
   {
      return cents;
   }
*/
   void setDollars(int dollars);
   void setCents(int cents);
};

/* Inline Option 2 

inline int Money::getDollars() const
{
   return dollars;
}

inline int Money::getCents() const
{
   return cents;
}
*/

#endif
