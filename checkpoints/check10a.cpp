/***********************************************************************
* Program:
*    Checkpoint 10a, Vectors
*    Brother Macbeth, CS165
* Author:
*    Chad Macbeth
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   vector<int> numbers;
   vector<string> strings;
   int inputInt;
   string inputString;

   // NOTE: Iterators are implemented below as examples.  I commented out the cout's so 
   // this file will pass testBed.

   do
   {
      cout << "Enter int: ";
      cin >> inputInt;
      if (inputInt != 0)
      {
         numbers.push_back(inputInt);
      }
   }
   while (inputInt != 0);

   cout << "Your list is:\n";

   /* Implement without an iterator */

   for (int i=0; i<numbers.size(); i++)
   {
      cout << numbers[i] << endl;
   }

   /* Implement with an iterator using while loop */

   vector<int>::iterator numbersIter = numbers.begin();
   while (numbersIter != numbers.end())
   {
      //cout << *numbersIter << endl;
      numbersIter++;
   }

   /* Implement with an iterator using for loop */
   for (vector<int>::iterator iter = numbers.begin(); iter != numbers.end(); iter++)
   {
      //cout << *iter << endl;
   }

   cout << "\n";
   do
   {
      cout << "Enter string: ";
      cin >> inputString;
      if (inputString != "quit")
      {
         strings.push_back(inputString);
      }
   }
   while (inputString != "quit");

   cout << "Your list is:\n";

   /* Implement without an iterator */
   for (int i=0; i<strings.size(); i++)
   {
      cout << strings[i] << endl;
   }

   /* Implement with an iterator using while loop */
   vector<string>::iterator stringsIter = strings.begin();
   while (stringsIter != strings.end())
   {
      //cout << *stringsIter << endl;
      *stringsIter++;
   }

   /* Implement with an itereator using for loop */
   for (vector<string>::iterator iter = strings.begin(); iter != strings.end(); iter++)
   {
      //cout << *iter << endl;
   }

   return 0;
}


