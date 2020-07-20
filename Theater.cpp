#include "Theater.h"

Theater::Theater()
{
       add_Type();
       add_Title();
       add_Artist();
       add_Date();
       add_Place();
       add_Hall();
}

    Theater::Theater(string type,string title, string artist, int year, int month, int day, int hour, int minute, string city, string address, int num_line, int num_seat, int cof){
      type_of_theater = type;
      this->title = title;
      this->artist = artist;
      time.set_Time(year, month, day, hour, minute);
      place.set_Place(city, address);
      myHall.num_line = num_line;
      myHall.num_seat = num_seat;
      myHall.cof = cof;
      myHall.setHall();
    }

    void Theater::add_Type() {
      cout << "Добавьте тип театрального события: ";
      cin.ignore();
      getline(cin,type_of_theater);
      //cin >> type_of_theater;
    }

    string Theater::getTypeOfTheater() {
      return type_of_theater;
    }

    string Theater::getTypeOfEvent() {
      return type_of_event;
    }
