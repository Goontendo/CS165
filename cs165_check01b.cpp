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
    float num;
    int number[20];
    cout<<"Enter the size of the list: ";
    cin>> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter number for index " << i << ": ";
        cin >> number[i];
    }
    cout << "\n";
    cout << "The following are divisible by 3:\n";
    for (int i = 0; i < num; i++)
    {
        if (number[i] % 3 == 0)
            cout << number[i] << "\n";
    }
   return 0;
}
