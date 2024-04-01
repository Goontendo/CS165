/***********************************************************************
* Program:
*    Assignment 01, Genetic Genealogy   
*    Brother Alvey, CS165
* Author:
*    your name
* Summary: 
*    checks for genetic similarities between markers
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Function to retrieve percentages of matching DNA
 ***********************************************************************/
int DNA(char Ydna[][10], char Rdna[][10], int relatives, int number)
{
   int percent = 0;
   for (int k = 0; k < 10; k++)
   {
      if (Ydna[0][k] == Rdna[number][k])
         percent += 10;
   }
   return percent;
}

/**********************************************************************
 * Function to enter names of relatives
 ***********************************************************************/
int name(int relatives, string names[])
{
   for (int i = 0; i < relatives; i++)
   {
      int numR = i + 1;
      cout << "Please enter the name of relative #" << numR << ": ";
      cin >> names[i];
   }
   return 0;
}

/**********************************************************************
 * Main Function
 ***********************************************************************/
int main()
{
   char Ydna[50][10];
   int relatives;
   string names[50];
   char Rdna[50][10];
   int rename;
   int number;
   cout << "Enter your DNA sequence: ";
   cin >> Ydna[0];
   cout << "Enter the number of potential relatives: ";
   cin >> relatives;
   cout << "\n";
   name(relatives, names);
   cout << "\n";
   for (int i = 0; i < relatives; i++)
   {
      cout << "Please enter the DNA sequence for " << names[i] << ": ";
      cin >> Rdna[i];
   }
  
   cout << "\n";
  
   for (int i = 0; i < relatives; i++ )
   {
      rename = DNA(Ydna, Rdna, relatives, i);
      cout << "Percent match for " << names[i] << ": " << rename << "%\n";
   }

   return 0;
}
