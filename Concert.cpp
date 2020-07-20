#include "Concert.h"

Concert::Concert()
{
       add_Type();
       add_Title();
       add_Artist();
       add_Date();
       add_Place();
       add_Hall();
}

    Concert::Concert(string type,string title, string artist, int year, int month, int day, int hour, int minute, string city, string address, int num_line, int num_seat, int cof){
      type_of_concert = type;
      this->title = title;
      this->artist = artist;
      time.set_Time(year, month, day, hour, minute);
      place.set_Place(city, address);
      myHall.num_line = num_line;
      myHall.num_seat = num_seat;
      myHall.cof = cof;
      myHall.setHall();
    }

    void Concert::add_Type() {
       cout << "Добавьте тип концерта: ";
       cin.ignore();
       getline(cin,type_of_concert);
       //cin >> type_of_concert;
    }

    string Concert::getTypeOfConcert() {
       return type_of_concert;
    }

    string Concert::getTypeOfEvent() {
       return type_of_event;
    }
