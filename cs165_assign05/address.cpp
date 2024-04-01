// File: address.cpp
#include <iostream>
#include <string>

using namespace std;

#include "address.h"

// Put your method bodies for the address class here
void Address :: display()
{
   cout << street << endl;
   cout << city << ", " << state 
      << " " << zip << endl;
}