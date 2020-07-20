#include "Place.h"

       Place::Place()
       {
           city = "no_city";
           address = "no_adress";
       }

       Place::Place(string our_city, string our_address) : city(our_city), address(our_address) {
       }


       void Place::setPlace() { //установка места проведени€ событи€
         cin.ignore();
         cout << "¬ведите город: "; getline(cin,city);
         //cin >> city;
         cout << "¬ведите адресс: "; getline(cin,address);
         //cin >> address;
       }

       string Place::getPlace() { //возвращает место проведени€ событи€
         return address + ", " + city;
       }

       void Place::set_Place(string city,string address) {
       this->city = city;
       this->address = address;
       }
