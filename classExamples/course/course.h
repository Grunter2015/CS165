#ifndef COURSE_H
#define COURSE_H

#include <iostream>

using namespace std;

class Course
{
   private:
      int maxStudents;
      int enrolled;
      string name;

   public:
      Course();
      Course(string name, int maxStudents);
      void addStudent();
      void dropStudent();
      void display();
      void prompt();
};


#endif
