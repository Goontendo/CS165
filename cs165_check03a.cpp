/***********************************************************************
* Program:
*    Checkpoint 03a, Exceptions      (e.g. Assignment 01, Hello World)  
*    Brother Alvey, CS165
* Author:
*    Jared Thomasson
* Summary: 
*    Enter a brief description of your program here!  Please note that if
*    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int prompt()
{
   int num;
   cout << "Enter a number: ";
   cin >> num;

   return num;
}
int main()
{
   int number;
   string odd = "Error: The number cannot be odd.";
   string greater = "Error: The number cannot be greater than 100.";
   string negative = "Error: The number cannot be negative.";
   string answer = "The number is ";
   number = prompt();

   if (number % 2 && number > 0 && number < 100)
      cout << odd << endl;
   else if (number < 0)
      cout << negative << "\n";
   else if (number > 100)
      cout << greater << endl;
   else if (number > 0 && number < 100)
      cout << answer << number << ".\n";
   
   return 0;
}
