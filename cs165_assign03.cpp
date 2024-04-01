/***********************************************************************
* Program:
*    Assignment 03, DIGITAL FORENSICS WITH CORRUPT FILES 
*    Brother Alvey, CS165
* Author:
*    Jared Thomasson
* Summary: 
*    Assignment 03 calls to search a corrupted file and sort through the 
*    the information. 
*
*    Estimated:  5.0 hrs   
*    Actual:     8.0 hrs
*      if and else statments to fit the criteria for the program.
************************************************************************/

#include <iostream>
#include <algorithm> 
#include <functional> 
#include <cctype>
#include <locale>
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
 * Function: parseline
 * Purpose: Grabs line and verifies if there is an error
 **********************************************************************/
int parseline(string line, int count, Access &a)
{ 
   // The current line is now stored in the variable "line"

   stringstream ss;
   ss.str(line); // load the line into "ss"
   string file;
   string user;
   string timeStamp;

   ss >> file;
   ss >> user;
   ss >> timeStamp; 

   stringstream num(timeStamp);
   long int time;
   num >> time;

   // We can also check for failures:
   if (time > 10000000000 || time < 999999999)
   {
      cout << "Error parsing line: " << line << endl;
   }
   else if (file == "" && user == "" && timeStamp == "")
   {
      cout << "";
   }
   else if (ss.fail())
   {
      cout << "Error parsing line: " << line << endl;
   }
   else 
   {
      a.filename[count] = file;
      a.username[count] = user;
      a.timestamp[count] = timeStamp;
      count++;
   }
   return count;
}

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
      string line;
      getline(fin, line);
      count = parseline(line, count, a);
   }
   cout << "\n";
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

   size = retrieve(a, size, file);

   cout << "Enter the start time: ";
   cin >> start;
   cout << "Enter the end time: ";
   cin >> end;
   cout << endl;

   

   display(a, size, start, end);


   return 0;
}