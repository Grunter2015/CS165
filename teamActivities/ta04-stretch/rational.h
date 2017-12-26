// CS165 Team Activity 04 - Stretch
// Written by CHad Macbeth

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
      void multiplyBy(Rational *r); // Accepts a pointer to a Rational Object
      void reduce();
};

#endif
