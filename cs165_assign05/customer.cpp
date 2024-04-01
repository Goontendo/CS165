// File: customer.cpp
#include <iostream>
#include <string>

using namespace std;

#include "customer.h"
#include "address.h"
// Put the method bodies for your customer class here
void Customer :: display()
{
   cout << name << endl;
   address.display();
}