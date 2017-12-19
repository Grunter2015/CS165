// CS165 - Checkpoint 02B
// Written by Chad Macbeth

#include <iostream>
using namespace std;

struct Complex
{
    double real;
    double imaginary;
};

// Get the complex number
void promptComplex(Complex &complex)
{
    cout << "Real: ";
    cin >> complex.real;
    cout << "Imaginary: ";
    cin >> complex.imaginary;
}

// Display the complex number (constant)
void display(const Complex complex)
{
    cout << complex.real << " + " << complex.imaginary << "i";
}

// Add the 2 complex numbers and return a new complex number
Complex addComplex(const Complex & x, const Complex & y)
{
   Complex result;

   result.real = x.real + y.real;
   result.imaginary = x.imaginary + y.imaginary;
 
   return result;
}

// Driver
int main()
{
   Complex c1;
   Complex c2;
   Complex sum;

   promptComplex(c1);
   promptComplex(c2);

   sum = addComplex(c1,c2);

   cout << "\nThe sum is: ";
   display(sum);
   cout << endl;
 
   return 0;
}


