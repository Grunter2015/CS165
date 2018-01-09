// CS165 Checkpoint 10A
// Written by Chad Macbeth

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

   do
   {
      cout << "Enter int: ";
      cin >> inputInt;
      if (inputInt != 0)
      {
         numbers.push_back(inputInt); // Add to the back of the vector
      }
   }
   while (inputInt != 0);

   cout << "Your list is:\n";

   // Option 1: Implement without an iterator (simple solution) 
   for (int i=0; i<numbers.size(); i++)
   {
      cout << numbers[i] << endl;
   }

   // Option 2: Implement with an iterator using while loop 
   vector<int>::iterator numbersIter = numbers.begin(); // Start the iterator at the beginning
   while (numbersIter != numbers.end())
   {
      //cout << *numbersIter << endl;  // The use of * gives you the value at this iteration point
      numbersIter++;  // Goto the next one
   }

   // Option 3: Implement with an iterator using for loop
   // I do not prefer this method because the length is not known.
   // I only use for loops when the number of iterations is known. 
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

   return 0;
}


