/***************************************************************
 * File: product.cpp
 * Author: Jared Thomasson
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// put your method bodies here

void Product :: getSalesTax()
{
   tax = base/100;
   tax = tax * 6;
}

float Product :: getShippingCost()
{
   float leftover;
   shipping = 2.00;
   if (weight > 5)
   {
      leftover = weight - 5;
      leftover = leftover * 0.10;
   }
   shipping = leftover + shipping;

   return shipping;
}

float Product :: getTotalPrice()
{
   return total = shipping + tax + base;
}

void Product :: displayAdvertising()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << name << " - $" << base 
      << "\n(" << description << ")\n";
}

void Product :: displayInventory()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << "$" << base << " - ";
   cout.precision(1);
   cout << name << " - " << weight << " lbs\n";
}

void Product :: displayReceipt()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << name << "\n"
      << "  Price: " << setw(9) << "$" 
      << setw(8) << base << "\n"
      << "  Sales tax: " << setw(5) << "$"
      << setw(8) << tax << "\n"
      << "  Shipping cost: " << setw(1) << "$"
      << setw(8) << shipping << "\n"
      << "  Total: " << setw(9) << "$"
      << setw(8) << total << "\n";
}
