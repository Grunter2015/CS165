/***************************************************************
 * File: rational.h
 * Author: Chad Macbeth 
 * Purpose: Contains the definition of the Rational class
 ***************************************************************/
#ifndef RATIONAL_H
#define RATIONAL_H

using namespace std;

class Rational
{
   private:
      int top;
      int bottom;
  
   public:
      void prompt();
      void display() const;
      void displayDecimal() const;
      void multiplyBy(Rational *r);
      void reduce();
};

#endif
