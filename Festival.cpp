#include "Festival.h"

Festival::Festival()
{
       add_Type();
       add_Title();
       add_Artist();
       add_Date();
       add_Place();
       add_Hall();
}

    Festival::Festival(string type,string title, string artist, int year, int month, int day, int hour, int minute, string city, string address, int num_line, int num_seat, int cof){
      type_of_festival = type;
      this->title = title;
      this->artist = artist;
      time.set_Time(year, month, day, hour, minute);
      place.set_Place(city, address);
      myHall.num_line = num_line;
      myHall.num_seat = num_seat;
      myHall.cof = cof;
      myHall.setHall();
    }

    void Festival::add_Type() {
      cout << "Добавьте тип фестиваля: ";
      cin.ignore();
      getline(cin,type_of_festival);
     // cin >> type_of_festival;
    }

    string Festival::getTypeOfFestival() {
      return type_of_festival;
    }

    string Festival::getTypeOfEvent() {
      return type_of_event;
    }
