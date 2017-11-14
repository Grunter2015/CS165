// Must use g++11 to compile.  The constant iterator functions are only available in standard 11.

#include <iostream>
#include <list>

using namespace std;

void promptNumbers(list<int> &numbers)
{
   int number;
   do
   {
      cout << "Number: ";
      cin >> number;
      if (number != 0)
      {
         // Push to the back of the list
         numbers.push_back(number);
      }
   }
   while (number != 0);
}

void displayNumbers(const list<int> &numbers)
{
   // If we don't want to modify the list, a 
   // constant iterator and constant begin/end 
   // functions are used.
   list<int>::const_iterator iter = numbers.cbegin();
   while (iter != numbers.cend())
   {
      cout << *iter << endl;
      iter++;
   }
}

void displayNumbersBackwards(const list<int> &numbers)
{
   // There is an iterator for going backwards and for being
   // constant (along with the appropriate begin/end functions.
   list<int>::const_reverse_iterator iter = numbers.crbegin();
   while (iter != numbers.crend())
   {
      cout << *iter << endl;
      iter++;
   }
}

void removeOdds(list<int> &numbers)
{
   list<int>::iterator iter = numbers.begin();
   while (iter != numbers.end())
   {
      if (*iter % 2 != 0)
      {
         // When erasing from a list, the updated iterator
         // is returned.
         iter = numbers.erase(iter);
      }
      else
      {
         iter++;
      }
   }
}

int main()
{
   list<int> numbers;

   promptNumbers(numbers);
   cout << "---" << endl;
   displayNumbers(numbers);
   cout << "---" << endl;
   displayNumbersBackwards(numbers);
   cout << "---" << endl;
   removeOdds(numbers);
   displayNumbers(numbers);
 
   return 0;
}

