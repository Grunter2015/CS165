// CS165 Checkpoint 04B
// Written by Chad Macbeth

#ifndef DATE_H
#define DATE_H

using namespace std;

class Date 
{
   private:
      int month;
      int day;
      int year;

   public:
      void set(int month, int day, int year);
      void displayAmerican() const;  // const == will not modify member data
      void displayEuropean() const;
      void displayISO() const;
};

#endif

