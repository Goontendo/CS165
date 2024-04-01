/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers      (e.g. Checkpoint 01a, review) 
*    Brother Alvey, CS165
* Author:
*    Jared Thomasson
* Summary: 
*    Adds complex numbers together
* ***********************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

struct Complex
{
   double real1;
   double real2;
   double imaginary1;
   double imaginary2;
};

struct sum
{
   double real;
   double imaginary;
};

/**********************************************************************
 * Function: prompt
 * Purpose: Prompt users for real numbers and imaginary numbers
 * to be added.
 ***********************************************************************/
int prompt(Complex &x)
{
   cout << "Real: ";
   cin >> x.real1;
   cout << "Imaginary: ";
   cin >> x.imaginary1;
   cout << "Real: ";
   cin >> x.real2;
   cout << "Imaginary: ";
   cin >> x.imaginary2;

   return 0;
}

/**********************************************************************
 * Function: display
 * Purpose: display the sum.
 ***********************************************************************/
void display(sum &s);

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
void addComplex(Complex &x, sum &s);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare two Complex objects, c1 and c2
   struct Complex x;
   
   // Call your prompt function twice to fill in c1, and c2 
   prompt(x);
   // Declare another Complex for the sum
   struct sum s;

   // Call the addComplex function, putting the result in sum;
   addComplex(x,s);
   
   cout << "\nThe sum is: ";
   display(s);
   cout << endl;
 
   return 0;
}

/**********************************************************************
 * Function: display
 * Purpose: display the sum.
 ***********************************************************************/
void display(sum &s)
{
   cout << s.real << " + " << s.imaginary << "i";
}

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
void addComplex(Complex &x, sum &s)
{
   s.real = x.real2 + x.real1;
   s.imaginary = x.imaginary1 + x.imaginary2;
   
}
