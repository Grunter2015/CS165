#include <iostream>

using namespace std;

double calcAverage(int pressure[], int size)
{
   double sum = 0.0;
   
   for (int i=0; i<size; i++)
   {
      sum += (double) (pressure[i]);
   }
   return (sum / size);
}

int main()
{
   int pressure[5] = {1200, 1210, 1205, 1205, 1204};
   double avg_pressure = 0.0;


   avg_pressure = calcAverage(pressure,5);
   

   cout << "The average pressure is " << avg_pressure << " psi.\n";

   return 0;
}
