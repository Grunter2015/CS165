/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers
*    Brother {Burton, Falin, Ercanbrack}, CS165
* Author:
*    your name
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

struct Complex
{
    double real;
    double imaginary;
};

void promptComplex(Complex &complex)
{
    cout << "Real: ";
    cin >> complex.real;
    cout << "Imaginary: ";
    cin >> complex.imaginary;
}

void display(const Complex complex)
{
    cout << complex.real << " + " << complex.imaginary << "i";
}

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
Complex addComplex(const Complex & x, const Complex & y)
{
   Complex result;

   result.real = x.real + y.real;
   result.imaginary = x.imaginary + y.imaginary;
 
   return result;
}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
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


