// File: address.h

#ifndef ADDRESS_H
#define ADDRESS_H

// Put your Address class here
class Address
{
   private:
      string street;
      string city;
      string state;
      string zip;
   public:
   Address()
   {
      street = "unknown";
      zip = "00000";
      state = "";
      city = "";
   }

   Address(string street, string city, string state, string zip)
   {
      setStreet(street);
      setCity(city);
      setState(state);
      setZip(zip); 
   }

   void setStreet(string street) { this-> street = street; }
   void setCity(string city) { this-> city = city; }
   void setState(string state) { this-> state = state; }
   void setZip(string zip) { this -> zip = zip; }

   string getStreet() const {return street; }
   string getCity() const {return city; }
   string getState() const {return state; }
   string getZip() const {return zip; }

   void display();
};

#endif
