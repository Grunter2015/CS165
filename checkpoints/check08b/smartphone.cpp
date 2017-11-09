/*******************
 * smartphone.cpp
 *******************/
#include <iostream>
#include "phone.h"
#include "smartphone.h"

using namespace std;

void SmartPhone::prompt()
{
   promptNumber();
   cout << "Email: ";
   cin >> email;
   cin.ignore(1);
}

void SmartPhone::display() const
{
   Phone::display();
   cout << email << endl;
}
