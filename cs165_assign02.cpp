/***********************************************************************
* Program:
*    Assignment 02, Digital Forensic         
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
#include <fstream>
#include <iomanip>
#include <string> // used for string
#include <sstream> // used for stringstream
using namespace std;

/**********************************************************************
 * Struct: Access
 * Purpose: Place to store information
 ***********************************************************************/
struct Access
{
   string username[50];
   string filename[50];
   string timestamp[50];
};

/**********************************************************************
 * Function: Retrieve
 * Purpose: Reads file and stores information away
 ***********************************************************************/
int retrieve(Access &a, int &size, string file)
{
   ifstream fin;
   fin.open(file);
   
   int count = 0; 

   while (fin.good())
   {
      fin >> a.filename[count];
      fin >> a.username[count];
      fin >> a.timestamp[count];
      count++;
   }
   size = count;
   fin.close();
   
   return size;
}

/**********************************************************************
 * Function: display
 * Purpose: Displays information pulled from file
 ***********************************************************************/
int display(Access &a, int size, int start, int end)
{

   cout << "The following records match your criteria:\n";
   cout << endl;
   cout << "      Timestamp                File                User" << endl;
   cout << "--------------- ------------------- -------------------" << endl;
   for (int i = 0; i < size; i++)
   {  
      stringstream num(a.timestamp[i]);
      int id;
      num >> id;

      if (id >= start && id <= end)
      {
         cout << setw(15) << a.timestamp[i] 
            << setw(20) << a.filename[i]
            << setw(20) << a.username[i]
            << endl;
      }
   }
   cout << "End of records\n";
   return 0;
}

/**********************************************************************
 * Function: Main
 * Purpose: Main
 ***********************************************************************/
int main()
{

   string file;
   Access a;
   int start;
   int end;
   int size = 0;

   cout << "Enter the access record file: ";
   cin >> file;
   cout << "\nEnter the start time: ";
   cin >> start;
   cout << "Enter the end time: ";
   cin >> end;
   cout << endl;

   size = retrieve(a, size, file);

   display(a, size, start, end);


   return 0;
}
