/***********************************************************************
* Program:
*    Checkpoint 03b, Error       (e.g. Checkpoint 01a, review)  
*    Brother Alvey, CS165
* Author:
*    your name
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int number;
   bool check;                
   do
   {
      number = 0;
      cout << "Enter a number: ";
      cin >> number;
      if (cin.fail())
      {
         cout << "Invalid input.\n";
         check = false;
         cin.clear();
         cin.ignore(10000,'\n');
      }
      else 
         check = true;

   }while (check == false);
   
   cout << "The number is " << number << ".\n";
   return 0;
}
