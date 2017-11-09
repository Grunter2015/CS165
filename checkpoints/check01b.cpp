/***********************************************************************
* Program:
*    Checkpoint 01B  
*    Brother Macbeth, CS165
* Author:
*    Chad Macbeth 
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

int getSize()
{
    int size;

    cout << "Enter the size of the list: ";
    cin >> size;

    return size;
}

void getList(int list[], int size)
{
   int i;

   for (i=0; i<size; i++)
   {
      cout << "Enter number for index " << i << ": ";
      cin >> list[i];
   }
}

void displayMultiples(int list[], int size)
{
   int i;

   cout << "\nThe following are divisible by 3:\n";
   for (i=0; i<size; i++)
   {
      if ((list[i] % 3) == 0)
      {
         cout << list[i] << "\n";
      }
   }
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int list[20];
   int size;

   size = getSize();
   getList(list, size);
   displayMultiples(list, size);

   return 0;
}
