#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   double latitude;
   double longitude;

   ifstream fin("coord.txt");
   if (fin.fail())
   {
      cout << "Can't open file!\n";
      return -1;
   }
   while (fin >> latitude >> longitude)
   {
      cout << "Lat: " << latitude << " Long: " << longitude << endl;
   }
   fin.close();     
   return 0;
}
