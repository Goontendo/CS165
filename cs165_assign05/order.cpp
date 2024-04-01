// File: order.cpp
#include <iostream>
#include <string>

using namespace std;

#include "order.h"
#include "product.h"
#include "address.h"
#include "customer.h"

// Put your the method bodies for your order class here
string Order :: getShippingZip() const
{
   Address tempAddress = customer.getAddress();
   return tempAddress.getZip();
}

float Order :: getTotalPrice()
{
   Product tempTotal;
   tempTotal.TotalPrice = product.getTotalPrice();
   return tempTotal.TotalPrice;
}

void Order :: displayShippingLabel() const
{
   Address shipping;
   shipping.display();
}

void Order :: displayInformation() const
{
   Customer name;
   Product product;
   cout << name.getName() << endl;
   cout << product.getName() << endl;
   cout << "Total Price: $" << product.getTotalPrice() << endl;
}