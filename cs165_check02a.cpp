/***********************************************************************
* Program:
*    Checkpoint 02a, STRUCTS         (e.g. Checkpoint 01a, review)  
*    Brother Alvey, CS165
* Author:
*    Jared Thomasson
* Summary: 
*    Uses Structs to show information of the student
* ***********************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/

struct User
{
   string first;
   string last;
   int id;
};

void Display(struct User u);

int main()
{
   struct User u;
   cout << "Please enter your first name: ";
   cin >> u.first;
   cout << "Please enter your last name: ";
   cin >> u.last;
   cout << "Please enter your id number: ";
   cin >> u.id;
   cout << endl;
   

   Display(u);
  
   return 0;
}

void Display(struct User u)
{
   cout << "Your information:\n";
   cout << u.id << " - " << u.first << " " << u.last << endl;

}
