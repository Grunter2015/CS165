// CS165 Checkpoint 08B
// Written by Chad Macbeth

#include <iostream>
#include "phone.h"
#include "smartphone.h"

using namespace std;

// Prompt for phone number and email address
void SmartPhone::prompt()
{
   // Since the promptNumber function is unique only 
   // to the base class, we can just call it.
   promptNumber(); 
   cout << "Email: ";
   cin >> email;
}

void SmartPhone::display() const
{
   // Since the display function exists in both the
   // base class and the derived class, then we need
   // to tell the complier which one to use by using the
   // Phone:: prefix.
   Phone::display();  
   cout << email << endl;
}
