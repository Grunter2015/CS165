// CS165 Checkpoint 08B
// Written by Chad Macbeth

#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include <iostream>
#include "phone.h"

using namespace std;

class SmartPhone : public Phone
{
   private:
      string email;
  
   public:
      void prompt();
      void display() const;
};

#endif
