// File: customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "address.h"

// put your Customer class here
class Customer
{
   private:
      string name;
      Address address;
   public:
      Customer()
      {
         name = "unspecified";
      }

      Customer(string name, Address address)
      {
         setName(name);
         setAddress(address);
      }

      string getName() const {return name; }
      Address getAddress() const {return address; }

      void setName(string name) { this-> name = name; }
      void setAddress(Address address) { this-> address = address; }

      void display();
};
#endif
