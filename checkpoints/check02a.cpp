/***********************************************************************
* Program:
*    Checkpoint ###, ????          (e.g. Checkpoint 01a, review)  
*    Brother {Burton, Falin, Ercanbrack, Comeau}, CS165
* Author:
*    your name
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int id;
};

void displayStudent(const Student student)
{
    cout << student.id << " - " << student.firstName << " " << 
            student.lastName << endl;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Student student;

   cout << "Please enter your first name: ";
   cin >> student.firstName;
   cout << "Please enter your last name: ";
   cin >> student.lastName;
   cout << "Please enter your id number: ";
   cin >> student.id;

   cout << "\nYour information:\n";
   displayStudent(student);

   return 0;
}
