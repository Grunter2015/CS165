#include <iostream>
#include <sstream>

using namespace std;

void parseEquation(string text, float &solution)
{
   float value1;
   float value2;
   string oper;

   stringstream ss(text);

   ss >> value1;
   ss >> oper;
   ss >> value2;

   if (ss.fail())
   {
      throw string("Invalid format!");
   }

   if ((oper != "+") && 
       (oper != "-"))
   {
      throw string("Invalid operator!") + oper;
   }

   if (oper == "+")
   {
      solution = value1 + value2;
   }
   else if (oper == "-")
   {
      solution = value1 - value2;
   } 

}

int main()
{
   string text;
   float result;

   while (1)
   {
      cout << "Enter a math equation using plus and subtract: ";
      getline(cin, text);
      try
      {
         parseEquation(text, result);
         cout << "Result = " << result << endl;
      }
      catch (string errorMsg)
      {
         cout << "ERROR: " << errorMsg;
      }
   }

   return 0;
}
