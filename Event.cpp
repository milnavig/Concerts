#include "Event.h"


    void Event::add_Date() { //установка даты и времени проведения
      time.setTime();
    }

    void Event::add_Place() { //установка места проведения
      place.setPlace();
    }

    void Event::add_Hall() { //функция создание зала
       cout << "Введите количество рядов, количество мест в ряду и коефициент для цены: ";
       cin >> num_seat; cin >> num_line; cin >> our_cof;

       myHall.num_seat = num_seat; //количество кресел в ряду
       myHall.num_line = num_line; //количество рядов
       myHall.cof = our_cof; //установка коефициента
       myHall.setHall();
       myHall.getHall(); //выводит все места на екран
    }

    void Event::add_Artist(){
       cout << "Добавить артиста или группу: ";
       //cin.ignore();
       getline(cin,artist);
       //cin >> artist;
    }

    void Event::add_Title() {
       cout << "Добавьте название события: ";
       //cin.ignore();
       getline(cin,title);
       //cin >> title;
    }

    void Event::reserv() { //резервирование места
       int line;
       int seat;
       myHall.getHall();
       cout << "Введите ряд и место которое вы хотите забронировать" << endl;
       cin >> line; cin >> seat;
       myHall.reservation(line, seat);
     }

     string Event::get_Date() {
       return time.getTime();
     }

     string Event::get_Place() {
       return place.getPlace();
     }

     string Event::get_Artist() {
       return artist;
     }

     double Event::MaxPrice() {
       return myHall.maxPrice();
     }

     double Event::MinPrice() {
       return myHall.minPrice();
     }

     string Event::get_Title() {
       return title;
     }
