// student.cpp

#include "student.h"
#include <iostream>
using namespace std;

Student::~Student()
{
   if (name != NULL)
   {
      delete [] name;
      name = NULL;
   }
}

Student::Student(const Student &rhs)
{
   name = NULL;
   *this = rhs;
}

Student& Student::operator =(const Student &rhs)
{
   if (&rhs == this)
   {
      return *this;
   }
   if (name != NULL)
   {
      delete [] name;
      name = NULL;
   }
   setName(rhs.getName());
   id = rhs.id;
   return *this;
}

