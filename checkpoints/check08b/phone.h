/***************
 * phone.h
 ***************/

#ifndef PHONE_H
#define PHONE_H

using namespace std;

class Phone
{
   private:
      int areaCode;
      int prefix;
      int suffix;

   public:
      void promptNumber();
      void display() const;
};

#endif
