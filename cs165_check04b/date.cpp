/********************************************************************
 * File: date.cpp
 * Purpose: Holds the implementation of the Date class methods.
 ********************************************************************/
#include "date.h"

// Put your method bodies here...
void set(int day, int month, int year, date &d)
{
   d.month =  month;
   d.day = day;
   d.year = year;
}
void displayAmerican(date &d)
{
   cout << d.month << "/" 
      << d.day << "/" 
      << d.year << endl;
}
void displayEuropean(date &d)
{
   cout << d.day << "/" 
      << d.month << "/" 
      << d.year << endl;
}
void displayISO(date &d)
{
   cout << d.year << "-"
      << d.month << "-"
      << d.day << endl;
}