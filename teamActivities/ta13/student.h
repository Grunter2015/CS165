// student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
   int id;
   char *name;

public:
   Student() {name = NULL;}
   ~Student();
   Student(const Student &rhs);
   Student& operator =(const Student &rhs);

   int getId() const { return id; }
   void setId(int id) { this->id = id; }

   std::string getName() const { return string(name); }  // Convert char* to string

   void setName(std::string name) 
   { 
      // Delete old memory
      if (this->name != NULL)
      {
         delete [] this->name;
         this->name = NULL;
      }
      // Create new memory based on size of name 
      this->name = new char[name.size() + 1];
      // Copy all characters (including the NULL)
      strcpy(this->name, name.c_str());
   }

   friend ostream& operator <<(ostream& lhs, const Student &rhs)
   {
      lhs << rhs.id << " - " << rhs.name << endl;
      return lhs;
   }

};

#endif
