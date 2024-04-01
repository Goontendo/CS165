/***********************************************************************
* Program:
*    Checkpoint ###, ????          (e.g. Checkpoint 01a, review)  
*    Brother {Burton, Falin, Ercanbrack, Comeau}, CS165
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
    char name[3][256];
    cout << "Hello CS 165 World!\n";
    cout << "Please enter your first name: ";
    cin >> name[0];
    cout << "Please enter your age: ";
    cin >> name[1];
    cout << "\n";
    cout << "Hello " << name[0] << ", you are " << name[1] << " years old.\n";
    
    return 0;
}
