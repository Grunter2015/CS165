#include <iostream>
#include <cmath>

using namespace std;

bool safeDivide(double num, double denom, double &answer, bool roundResult = false)
{
   if (denom == 0.0)
   {
      answer = 0.0;
      return false;
   }
   else
   {
      answer = num / denom;
      if (roundResult)
      {
         answer = round(answer);
      }
      return true;
   }
}

bool safeDivide(int num, int denom, int &answer)
{
   if (denom == 0.0)
   {
      answer = 0.0;
      return false;
   }
   else
   {
      answer = num / denom;
      return true;
   }
}


int main()
{
   
   double answer;
   bool result;
   int answer_int;

   result = safeDivide(300.0, 0.0, answer);
   cout << answer << " " << result << endl; 
   result = safeDivide(300.0, 7.0, answer,true);
   cout << answer << " " << result << endl;
   result = safeDivide(300, 7, answer_int);
   cout << answer_int << " " << result << endl;
   return 0;
}
