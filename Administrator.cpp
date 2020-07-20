#include "Administrator.h"


    void Administrator::add_event(vector<Concert> & concert, vector<Festival> & festival, vector<Theater> & theater) { //добавление события
       int type;
       bool indicator = true;
       while (indicator) {
        cout << "Выберете тип события: 1 - концерт, 2 - фестиваль, 3 - театральное событие" << endl;
        cin >> type;
          switch (type) {
          case 1:
          concert.push_back(Concert());
          break;
          case 2:
          festival.push_back(Festival());
          break;
          case 3:
          theater.push_back(Theater());
          break;
          default:
          cout << "Введены не 1, 2, 3" << endl;
        }

        cout << "Если хотите выйти из режима добавления событий нажмите 0, иначе другую клавишу" << endl;
        cin >> type;
        if (type == 0) indicator = false;
       }
    }

    void Administrator::start(vector<Concert> & concert, vector<Festival> & festival, vector<Theater> & theater) { //основная функция
      int variant;
      bool indicator = true;
       while (indicator) {
       cout << "Выберете что делать: 1 - добавить события, 2 - вывести на экран события, 3 - выйти из администратора" << endl;
       cin >> variant;
         switch (variant) {
         case 1:
           add_event(concert, festival, theater);
         break;
         case 2:
           show_event(concert, festival, theater);
         break;
         case 3:
           indicator = false;
         break;
         default:
         cout << "Проверьте введное значение!";
      }
     }
    }

    void Administrator::show_event(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //вывод событий
        cout << "№ события" << setw(15) << "Тип события" << setw(15) << "Заголовок" << setw(15) << "имя"
        << setw(15) << "Дата" << setw(15) << "Место" << setw(15) << "Цена" << endl;
    for (int i=0; i<concert.size(); i++) {
        cout << concert[i].getTypeOfEvent() <<" №"<< i+1 << setw(15) << concert[i].getTypeOfConcert() << setw(15) << concert[i].get_Title() << setw(15) << concert[i].get_Artist()
        << setw(15) << concert[i].get_Date() << setw(15) << concert[i].get_Place()<< setw(15) << concert[i].MinPrice() << "-" << concert[i].MaxPrice() << endl;
    }
    for (int i=0; i<festival.size(); i++) {
        cout << festival[i].getTypeOfEvent() <<" №"<< i+1 << setw(15) << festival[i].getTypeOfFestival() << setw(15) << festival[i].get_Title() << setw(15) << festival[i].get_Artist()
        << setw(15) << festival[i].get_Date() << setw(15) << festival[i].get_Place()<< setw(15) << festival[i].MinPrice() << "-" << festival[i].MaxPrice() << endl;
    }
    for (int i=0; i<theater.size(); i++) {
        cout << theater[i].getTypeOfEvent() <<" №"<< i+1 << setw(15) << theater[i].getTypeOfTheater() << setw(15) << theater[i].get_Title() << setw(15) << theater[i].get_Artist()
        << setw(15) << theater[i].get_Date() << setw(15) << theater[i].get_Place()<< setw(15) << theater[i].MinPrice() << "-" << theater[i].MaxPrice() << endl;
    }
   }
