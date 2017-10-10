#include <iostream>
#include "course.h"

using namespace std;

Course::Course()
{
   enrolled = 0;
   maxStudents = 0;
   name = "";
}

Course::Course(string name, int maxStudents)
{
   enrolled = 0;
   this->maxStudents = maxStudents;
   this->name = name;
}

void Course::addStudent()
{
   if (enrolled < maxStudents)
   {
      enrolled++;
      cout << "Success!" << endl;
   }
   else
   {
      cout << "Sorry!  Class is full!" << endl;
   }
}

void Course::dropStudent()
{
   if (enrolled > 0)
   {
      enrolled--;
      cout << "Success!" << endl;
   }
   else
   {
      cout << "Sorry!  Class if empty!" << endl;
   }
}

void Course::display()
{
   cout << name << " Enrolled = " << enrolled << " out of " << maxStudents << endl;
}

void Course::prompt()
{
   cout << "Class name: ";
   getline(cin,name);
   cout << "Max students: ";
   cin >> maxStudents;
   cin.ignore(1); // Ignore the linefeed in case getline is called again.
}


