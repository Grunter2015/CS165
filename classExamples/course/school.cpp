#include <iostream>
#include "course.h"

using namespace std;

void menu(int &selection)
{
   cout << endl;
   cout << "Main Menu" << endl;
   cout << "==============================" << endl;
   cout << "\t1) Add CS 124" << endl;
   cout << "\t2) Drop CS 124" << endl;
   cout << "\t3) Add CS 165" << endl;
   cout << "\t4) Drop CS 165" << endl;
   cout << "\t5) Print all Courses" << endl;
   cout << "\t6) Exit" << endl;
   cout << "> ";
   cin >> selection; 
}

int main()
{
   Course cs124;
   Course cs165("CS 165",5); 
   int menuChoice;

   cs124.prompt();
   
   do
   {
      menu(menuChoice); 
      if (menuChoice == 1)
      {
         cs124.addStudent();
      }
      else if (menuChoice == 2)
      {
         cs124.dropStudent();
      }
      else if (menuChoice == 3)
      {
         cs165.addStudent();
      }
      else if (menuChoice == 4)
      {
         cs165.dropStudent();
      }
      else if (menuChoice == 5)
      {
         cs124.display();
         cs165.display();
      }  
   }
   while (menuChoice != 6);

   return 0;
}


    
