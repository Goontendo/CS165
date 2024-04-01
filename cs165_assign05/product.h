/***************************************************************
 * File: product.h
 * Author: Jared Thomasson
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

// put your class definition here
class Product
{
private:
   string name;
   float base;
   float weight;
   float shipping;
   float tax;
   float total;
   string description;


public:
   float TotalPrice;
   Product()
   {
      name = "none";
      description = "";
      weight = 0;
      base = 0;
   }
   Product(string name, string desciption, float base, float weight)
   {
      setName(name);
      setDescription(description);
      setBasePrice(base);
      setWeight(weight);
      getSalesTax();
      getShippingCost();
      getTotalPrice();

   }

   void setName(string name) { this-> name = name; }
   void setDescription(string description) { this-> description = description; }
   void setBasePrice(float base) { this-> base = base; }
   void setWeight(float weight) { this-> weight = weight; }

   string getName() const {return name; }
   float getBasePrice() const {return base; }
   float getWeight() const {return weight; }
   string getDescription() const {return description; }

   void getSalesTax();
   float getShippingCost();
   float getTotalPrice();

   void displayAdvertising();
   void displayInventory();
   void displayReceipt();
   
};
#endif