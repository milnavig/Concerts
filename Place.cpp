#include "Place.h"

       Place::Place()
       {
           city = "no_city";
           address = "no_adress";
       }

       Place::Place(string our_city, string our_address) : city(our_city), address(our_address) {
       }


       void Place::setPlace() { //��������� ����� ���������� �������
         cin.ignore();
         cout << "������� �����: "; getline(cin,city);
         //cin >> city;
         cout << "������� ������: "; getline(cin,address);
         //cin >> address;
       }

       string Place::getPlace() { //���������� ����� ���������� �������
         return address + ", " + city;
       }

       void Place::set_Place(string city,string address) {
       this->city = city;
       this->address = address;
       }
