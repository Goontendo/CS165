// File: order.h

#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "customer.h"


// Put your Order class here
class Order
{
   private:
      int quantity;
      Product product;
      Customer customer;
   public:
      Order()
      {
         quantity = 0;
      }

      Order(Product product, int quantity, Customer customer)
      {
         setProduct(product);
         setQuantity(quantity);
         setCustomer(customer);
      }

      Product getProduct() const {return product; }
      int getQuantity() const {return quantity; }
      Customer getCustomer () const {return customer; }

      void setProduct(Product product) { this-> product = product; }
      void setQuantity(int quantity) { this-> quantity = quantity; }
      void setCustomer(Customer customer) { this-> customer = customer; }

      std:: string getShippingZip() const;
      float getTotalPrice();
      void displayShippingLabel() const;
      void displayInformation() const;
};

#endif
