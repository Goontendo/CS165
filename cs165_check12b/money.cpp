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
 * Function: display
 * Purpose: Displays the value of the money object.
 ****************************************************************/
void Money :: display() const 
{
   cout << "$" << getDollars() << ".";
   cout << setfill('0') << setw(2) << getCents();
}

/*****************************************************************
 * Function: handleOverflow
 * Purpose: Checks if cents is greater than 100, and if so, rolls
 *   that amount over to dollars.
 ****************************************************************/
void Money :: handleOverflow()  
{
   if (cents >= 100)
   {
      dollars += cents / 100;
      cents = cents % 100;
   }
}


// Put the bodies of your member functions here!
Money Money::operator+(Money const& m2) {
	Money m3;

	m3.setDollars(this->getDollars() + m2.getDollars());
	m3.setCents(this->getCents() + m2.getCents());
	return m3;

}

Money Money::operator+=(Money const& m2) {

	this->setDollars(this->getDollars() + m2.getDollars());
	this->setCents(this->getCents() + m2.getCents());
	return *this;

}

Money& Money::operator++(int) {
	Money m3;

	Money* temp = this;
	this->setCents(this->getCents() +1);
	return *temp;

}

