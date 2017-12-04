// course.h

#ifndef COURSE_H
#define COURSE_H

#include "student.h"
#include <string>
#include <iostream>

using namespace std;

class Course
{
private:
   std::string name;
   int size;
   Student* classList;

public:
   Course(int size);
   ~Course();
   Course(const Course &rhs);
   Course& operator=(const Course &rhs);

   std::string getName() const { return name; }
   void setName(std::string name) { this->name = name; }
   
   int getSize() const { return size; }
   void setSize(int size) { this->size = size; }

   Student getStudent(int index) const;
   void setStudent(int index, const Student &);

   friend ostream& operator <<(ostream &lhs, const Course &rhs)
   {
      lhs << "Class list for course: " << rhs.name << endl;
      for (int i=0; i<rhs.size; i++)
      {
         lhs << rhs.classList[i];
      }
      return lhs; 
   }

};

#endif
