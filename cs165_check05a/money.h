/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
   int dollars;
   int cents;

public:
   void prompt();
   void display();
   //getters
   int getDollars();
   int getCents();
   //setters
   void setDollars(int dollars);
   void setCents(int cents);
};

#endif
