#include "Event.h"


    void Event::add_Date() { //��������� ���� � ������� ����������
      time.setTime();
    }

    void Event::add_Place() { //��������� ����� ����������
      place.setPlace();
    }

    void Event::add_Hall() { //������� �������� ����
       cout << "������� ���������� �����, ���������� ���� � ���� � ���������� ��� ����: ";
       cin >> num_seat; cin >> num_line; cin >> our_cof;

       myHall.num_seat = num_seat; //���������� ������ � ����
       myHall.num_line = num_line; //���������� �����
       myHall.cof = our_cof; //��������� �����������
       myHall.setHall();
       myHall.getHall(); //������� ��� ����� �� �����
    }

    void Event::add_Artist(){
       cout << "�������� ������� ��� ������: ";
       //cin.ignore();
       getline(cin,artist);
       //cin >> artist;
    }

    void Event::add_Title() {
       cout << "�������� �������� �������: ";
       //cin.ignore();
       getline(cin,title);
       //cin >> title;
    }

    void Event::reserv() { //�������������� �����
       int line;
       int seat;
       myHall.getHall();
       cout << "������� ��� � ����� ������� �� ������ �������������" << endl;
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
