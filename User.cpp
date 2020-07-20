#include "User.h"

    void User::show_event(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //вывод событий
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

    void User::toReservate(vector<Concert> & concert, vector<Festival> & festival, vector<Theater> & theater) { //бронирование мест
      int marker;
      int n; //номер в списке события
      cout << "Выберете тип события для которого хотите забронировать место"<< endl;
      cout << "1 - концерт, 2 - фестиваль, 3 - театральная постановка" << endl;
      cin >> marker;
        switch (marker) {
        case 1:
          cout << "Введите номер события - ";
          cin >> n;
          concert[n-1].reserv();
        break;
        case 2:
          cout << "Введите номер события - ";
          cin >> n;
          festival[n-1].reserv();
        break;
        case 3:
          cout << "Введите номер события - ";
          cin >> n;
          theater[n-1].reserv();
        break;
        default:
        cout << "Проверьте введное значение!";
        }
    }

    void User::start(vector<Concert> & concert, vector<Festival> & festival, vector<Theater> & theater) { //основная функция
     int starter;
     cout << "1 - вывести на екран события, 2 - забронировать место" << endl;
     cin >> starter;
       switch (starter) {
       case 1:
         cout << "Вывести: 1 - без сортировки; 2 - сортировка по цене; 3 - сортировка по дате;" << endl;
         cout << "4 - сортировка по именам учасников; 5 - сортировка по жанру; 6 - сортировка по месту проведения" << endl;
         cout << "7 - выборка по дате; 8 - выборка по месту проведения; 9 - выборка по цене; 10 - выборка по имени учасника" << endl;
           int n;
           cin >> n;
           switch (n) {
               case 1:
               show_event(concert, festival, theater);
               break;
               case 2:
               sort_price(concert, festival, theater);
               break;
               case 3:
               sort_date(concert, festival, theater);
               break;
               case 4:
               sort_names(concert, festival, theater);
               break;
               case 5:
               sort_type(concert, festival, theater);
               break;
               case 6:
               sort_place(concert, festival, theater);
               break;
               case 7:
               date_selection(concert, festival, theater);
               break;
               case 8:
               place_selection(concert, festival, theater);
               break;
               case 9:
               price_selection(concert, festival, theater);
               break;
               case 10:
               name_selection(concert, festival, theater);
               break;
           }
       break;
       case 2:
         toReservate(concert, festival, theater);
       break;
      }
    }

    void User::sort_price(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //сортировка по цене
       cout << "Сортировать: 1 - от min до max; 2 - от max до min" << endl;
       int indicator;
       cin >> indicator;
       switch (indicator) {
       case 1:
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j-1].MinPrice()>concert[j].MinPrice();j--)
			swap(concert[j-1],concert[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j-1].MinPrice()>festival[j].MinPrice();j--)
			swap(festival[j-1],festival[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j-1].MinPrice()>theater[j].MinPrice();j--)
			swap(theater[j-1],theater[j]);        // меняем местами элементы j и j-1
	   break;
	   case 2:
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j-1].MinPrice()<concert[j].MinPrice();j--)
			swap(concert[j-1],concert[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j-1].MinPrice()<festival[j].MinPrice();j--)
			swap(festival[j-1],festival[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j-1].MinPrice()<theater[j].MinPrice();j--)
			swap(theater[j-1],theater[j]);        // меняем местами элементы j и j-1
	   break;
       }
	   show_event(concert, festival, theater);
   }

   void User::sort_date(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //сортировка по дате
       cout << "Сортировать: 1 - от последнего до ближайшего; 2 - от ближайшего до последнего" << endl;
       int indicator;
       cin >> indicator;
       switch (indicator) {
       case 1:
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j-1].time < concert[j].time;j--)
			swap(concert[j-1],concert[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j-1].time < festival[j].time;j--)
			swap(festival[j-1],festival[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j-1].time < theater[j].time;j--)
			swap(theater[j-1],theater[j]);        // меняем местами элементы j и j-1
	   break;
	   case 2:
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j].time < concert[j-1].time;j--)
			swap(concert[j-1],concert[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j].time < festival[j-1].time;j--)
			swap(festival[j-1],festival[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j].time < theater[j-1].time;j--)
			swap(theater[j-1],theater[j]);        // меняем местами элементы j и j-1
       break;
       }
      show_event(concert, festival, theater);
   }

   void User::sort_names(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //сортировка по имени артистов
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j-1].get_Artist() > concert[j].get_Artist();j--)
			swap(concert[j-1],concert[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j-1].get_Artist() > festival[j].get_Artist();j--)
			swap(festival[j-1],festival[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j-1].get_Artist() > theater[j].get_Artist();j--)
			swap(theater[j-1],theater[j]);        // меняем местами элементы j и j-1
      show_event(concert, festival, theater);
   }

   void User::sort_type(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //сортировка по типу события
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j-1].getTypeOfConcert() > concert[j].getTypeOfConcert();j--)
			swap(concert[j-1],concert[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j-1].getTypeOfFestival() > festival[j].getTypeOfFestival();j--)
			swap(festival[j-1],festival[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j-1].getTypeOfTheater() > theater[j].getTypeOfTheater();j--)
			swap(theater[j-1],theater[j]);        // меняем местами элементы j и j-1
      show_event(concert, festival, theater);
   }

   void User::sort_place(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //сортировка по месту проведения
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j-1].get_Place() > concert[j].get_Place();j--)
			swap(concert[j-1],concert[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j-1].get_Place() > festival[j].get_Place();j--)
			swap(festival[j-1],festival[j]);        // меняем местами элементы j и j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j-1].get_Place() > theater[j].get_Place();j--)
			swap(theater[j-1],theater[j]);        // меняем местами элементы j и j-1
      show_event(concert, festival, theater);
   }

   void User::date_selection(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //выборка по дате
       vector<Concert> concert_by_date;
       vector<Festival> festival_by_date;
       vector<Theater> theater_by_date;
       cout << "Введите дату, типа dd/mm/yy h:m" << endl;
       string date;
       cin.ignore();
       getline (cin, date);
       for(int i=1;i<=concert.size();i++)
       if (date == concert[i-1].get_Date()) {Concert X = concert[i-1]; concert_by_date.push_back(X);}
       for(int i=1;i<=festival.size();i++)
       if (date == festival[i-1].get_Date()) {Festival X = festival[i-1]; festival_by_date.push_back(X);}
       for(int i=1;i<=theater.size();i++)
       if (date == theater[i-1].get_Date()) {Theater X = theater[i-1]; theater_by_date.push_back(X);}

       show_event(concert_by_date, festival_by_date, theater_by_date);
   }

   void User::place_selection(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //выборка по месту проведения
       vector<Concert> concert_by_place;
       vector<Festival> festival_by_place;
       vector<Theater> theater_by_place;
       cout << "Введите адресс, типа \"Адрес, Город\"" << endl;
       string place;
       cin.ignore();
       getline (cin, place);
       //cin >> place;
       for(int i=1;i<=concert.size();i++)
       if (place == concert[i-1].get_Place()) {Concert X = concert[i-1]; concert_by_place.push_back(X);}
       for(int i=1;i<=festival.size();i++)
       if (place == festival[i-1].get_Place()) {Festival X = festival[i-1]; festival_by_place.push_back(X);}
       for(int i=1;i<=theater.size();i++)
       if (place == theater[i-1].get_Place()) {Theater X = theater[i-1]; theater_by_place.push_back(X);}

       show_event(concert_by_place, festival_by_place, theater_by_place);
   }

   void User::price_selection(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //выборка по цене
       vector<Concert> concert_by_price;
       vector<Festival> festival_by_price;
       vector<Theater> theater_by_price;
       cout << "Введите цену:" << endl;
       double price;
       cin >> price;
       for(int i=1;i<=concert.size();i++)
       if (price == concert[i-1].MinPrice()) {Concert X = concert[i-1]; concert_by_price.push_back(X);}
       for(int i=1;i<=festival.size();i++)
       if (price == festival[i-1].MinPrice()) {Festival X = festival[i-1]; festival_by_price.push_back(X);}
       for(int i=1;i<=theater.size();i++)
       if (price == theater[i-1].MinPrice()) {Theater X = theater[i-1]; theater_by_price.push_back(X);}

       show_event(concert_by_price, festival_by_price, theater_by_price);
   }

   void User::name_selection(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //выборка по имени
       vector<Concert> concert_by_name;
       vector<Festival> festival_by_name;
       vector<Theater> theater_by_name;
       cout << "Введите имя учасника:" << endl;
       string name;
       cin.ignore();
       getline (cin, name);
       //cin >> name;
       for(int i=1;i<=concert.size();i++)
       if (name == concert[i-1].get_Artist()) {Concert X = concert[i-1]; concert_by_name.push_back(X);}
       for(int i=1;i<=festival.size();i++)
       if (name == festival[i-1].get_Artist()) {Festival X = festival[i-1]; festival_by_name.push_back(X);}
       for(int i=1;i<=theater.size();i++)
       if (name == theater[i-1].get_Artist()) {Theater X = theater[i-1]; theater_by_name.push_back(X);}

       show_event(concert_by_name, festival_by_name, theater_by_name);
   }
