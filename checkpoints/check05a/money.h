// CS165 Checkpoing 5A
// Written by Chad Macbeth

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
   int getDollars() const { return dollars; }
   int getCents() const { return cents; }
   void setDollars(const int dollars);
   void setCents(const int cents);
};

#endif
