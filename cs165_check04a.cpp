/***********************************************************************
* Program:
*    Checkpoint 04a, Classes        (e.g. Assignment 01, Hello World)  
*    Brother Alvey, CS165
* Author:
*    Jared Thomasson
* Summary: 
*    Program uses data type class that not only uses data types but
*    Also uses functions to get specific job done. In this case
*    this program asks for a book name and a title and displays it.
*
*    Estimated:  1.0 hrs   
*    Actual:     1.0 hrs
************************************************************************/

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
class book
{
   public:

   string title;
   string author;

   int prompt()
   {
   cout << "Title: ";
   getline(cin, title);
   cout << "Author: ";
   getline(cin, author);

   return 0;
   }
   int display()
   {
   cout << "\"" << title
   << "\" by " << author << endl;

   return 0;
   }
};

int main()
{
   book b;

   b.prompt();
   b.display();

   return 0;
}
