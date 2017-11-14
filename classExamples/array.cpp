#include <iostream>
#include <map>

using namespace std;

int main()
{
   map<string,int> numbers;
   int value = 0;
   string name = "";
   do
   {
      cout << "Value: ";
      cin >> value;
      if (value != 0)
      {
         cout << "Name: ";
         cin >> name;
         numbers[name] = value;
      }
   }
   while (value != 0);

   cout << "Enter name: ";
   cin >> name;
   cout << "Value is: " << numbers[name] << endl;
   
   return 0;
}

