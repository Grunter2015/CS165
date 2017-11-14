#include <iostream>
#include <vector>

using namespace std;

void promptNumbers(vector<int> &numbers)
{
   int number;
   do
   {
      cout << "Number: ";
      cin >> number;
      if (number != 0)
      {
         // Add to the end of the vector
         numbers.push_back(number);
      }
   }
   while (number != 0);
}

void displayNumbers(vector<int> &numbers)
{
   /* Use size 
   for (int i=0; i<numbers.size(); i++)
   {
      cout << numbers[i] << endl;
   }*/
   
   /* Use iterator */
   vector<int>::iterator iter = numbers.begin();
   while (iter != numbers.end())
   {
      cout << *iter << endl;
      iter++;
   }
}

void removeOdds(vector<int> &numbers)
{
   vector<int>::iterator iter = numbers.begin();
   while (iter != numbers.end())
   {
      if (*iter % 2 != 0)
      {
         // When you erase, the updated iterator location
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
   vector<int> numbers;

   promptNumbers(numbers);
   cout << "---" << endl;
   displayNumbers(numbers);
   cout << "---" << endl;
   removeOdds(numbers);
   displayNumbers(numbers);
 
   return 0;
}

