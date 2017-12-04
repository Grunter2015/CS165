// course.cpp

#include "course.h"
#include <string>
#include <iostream>
using namespace std;

Course::Course(int size)
{
   this->size = size;
   classList = new Student[size];
}

Course::~Course()
{
   delete [] classList;
   classList = NULL;
   cout << "Cleaning up course: " << name << endl;
}

Course::Course(const Course &rhs)
{
   // Shorthand to reuse the = operator defined below
   // Make sure classList is null so delete is not called
   // in the = operator.
   classList = NULL;
   *this = rhs;
}
   
Course& Course::operator=(const Course &rhs)
{
   // If we are assigning ourself to ourself,
   // then don't do anything (don't want to delete
   // our data before we try to copy our data).
   if (&rhs == this)
   {
      return *this;
   }   
   if (classList != NULL)
   {
      delete [] classList;
      classList = NULL;
   }
   size = rhs.size;
   name = rhs.name;
   classList = new Student[size];
   for (int i=0; i<size; i++)
   {
      classList[i] = rhs.classList[i]; // Use the same student objects
   }
   return *this;
}

Student Course::getStudent(int index) const
{
   return classList[index];
}

void Course::setStudent(int index, const Student & student)
{
   classList[index] = student;
}


