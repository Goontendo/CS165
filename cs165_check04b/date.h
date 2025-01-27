/********************************************************************
 * File: date.h
 * Purpose: Holds the definition of the Date class.
 ********************************************************************/

#ifndef DATE_H
#define DATE_H

// put your class definition here
// along with the data members, and method prototypes
class date
{
   public:
   int day;
   int month;
   int year;

   void set();
   void displayAmerican();
   void displayEuropean();
   void displayISO();
};

#endif
