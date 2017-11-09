/***********************************************************************
* File: date.h
* Purpose: Interface for the Date Class
************************************************************************/

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
      void displayAmerican() const;
      void displayEuropean() const;
      void displayISO() const;
};

#endif

