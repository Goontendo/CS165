/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "money.h"

/*****************************************************************
 * Function: prompt
 * Purpose: Asks the user for values for dollars and cents
 *   and stores them.
 ****************************************************************/
void Money :: prompt()
{
   int dollars;
   int cents;

   cout << "Dollars: ";
   cin >> dollars;

   cout << "Cents: ";
   cin >> cents;

   setDollars(dollars);
   setCents(cents);
}

/*****************************************************************
 * Function: Money
 * Purpose: Constructor no perimitters
 ****************************************************************/
Money :: Money()
{
   dollars = 0;
   cents = 0;
}

/*****************************************************************
 * Function: Money
 * Purpose: Constructor one perimitters
 ****************************************************************/
Money :: Money(int dollars)
{
   setDollars(dollars);
}

/*****************************************************************
 * Function: Money
 * Purpose: Constructor two perimitters
 ****************************************************************/
Money :: Money(int dollars, int cents)
{
   setDollars(dollars);
   setCents(cents);

}
/*****************************************************************
 * Function: display
 * Purpose: Displays the value of the money object.
 ****************************************************************/
void Money :: display()
{
   cout << "$" << getDollars() << ".";
   cout << setfill('0') << setw(2) << getCents();
}

/*****************************************************************
 * Function: getDollars
 * Purpose: Sends dollar to display
 ****************************************************************/
int Money :: getDollars()
{
   return dollars;
}

/*****************************************************************
 * Function: getCents
 * Purpose: Sends Cents to display
 ****************************************************************/
int Money :: getCents()
{
   return cents;
}

/*****************************************************************
 * Function: setDollars
 * Purpose: sets Dollar amount from input
 ****************************************************************/
void Money :: setDollars(int dollars)
{
   if (dollars < 0)
      dollars = dollars -(dollars * 2);
   else 
      dollars = dollars;
   this->dollars = dollars;
}

/*****************************************************************
 * Function: setCents
 * Purpose: sets Cents amount from input
 ****************************************************************/
void Money :: setCents(int cents)
{
   if (cents < 0)
      cents = cents - (cents * 2);
   else 
      cents = cents;
   this->cents = cents;
}