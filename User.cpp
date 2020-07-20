#include "User.h"

    void User::show_event(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //����� �������
    cout << "� �������" << setw(15) << "��� �������" << setw(15) << "���������" << setw(15) << "���"
        << setw(15) << "����" << setw(15) << "�����" << setw(15) << "����" << endl;
    for (int i=0; i<concert.size(); i++) {
        cout << concert[i].getTypeOfEvent() <<" �"<< i+1 << setw(15) << concert[i].getTypeOfConcert() << setw(15) << concert[i].get_Title() << setw(15) << concert[i].get_Artist()
        << setw(15) << concert[i].get_Date() << setw(15) << concert[i].get_Place()<< setw(15) << concert[i].MinPrice() << "-" << concert[i].MaxPrice() << endl;
    }
    for (int i=0; i<festival.size(); i++) {
        cout << festival[i].getTypeOfEvent() <<" �"<< i+1 << setw(15) << festival[i].getTypeOfFestival() << setw(15) << festival[i].get_Title() << setw(15) << festival[i].get_Artist()
        << setw(15) << festival[i].get_Date() << setw(15) << festival[i].get_Place()<< setw(15) << festival[i].MinPrice() << "-" << festival[i].MaxPrice() << endl;
    }
    for (int i=0; i<theater.size(); i++) {
        cout << theater[i].getTypeOfEvent() <<" �"<< i+1 << setw(15) << theater[i].getTypeOfTheater() << setw(15) << theater[i].get_Title() << setw(15) << theater[i].get_Artist()
        << setw(15) << theater[i].get_Date() << setw(15) << theater[i].get_Place()<< setw(15) << theater[i].MinPrice() << "-" << theater[i].MaxPrice() << endl;
    }
   }

    void User::toReservate(vector<Concert> & concert, vector<Festival> & festival, vector<Theater> & theater) { //������������ ����
      int marker;
      int n; //����� � ������ �������
      cout << "�������� ��� ������� ��� �������� ������ ������������� �����"<< endl;
      cout << "1 - �������, 2 - ���������, 3 - ����������� ����������" << endl;
      cin >> marker;
        switch (marker) {
        case 1:
          cout << "������� ����� ������� - ";
          cin >> n;
          concert[n-1].reserv();
        break;
        case 2:
          cout << "������� ����� ������� - ";
          cin >> n;
          festival[n-1].reserv();
        break;
        case 3:
          cout << "������� ����� ������� - ";
          cin >> n;
          theater[n-1].reserv();
        break;
        default:
        cout << "��������� ������� ��������!";
        }
    }

    void User::start(vector<Concert> & concert, vector<Festival> & festival, vector<Theater> & theater) { //�������� �������
     int starter;
     cout << "1 - ������� �� ����� �������, 2 - ������������� �����" << endl;
     cin >> starter;
       switch (starter) {
       case 1:
         cout << "�������: 1 - ��� ����������; 2 - ���������� �� ����; 3 - ���������� �� ����;" << endl;
         cout << "4 - ���������� �� ������ ���������; 5 - ���������� �� �����; 6 - ���������� �� ����� ����������" << endl;
         cout << "7 - ������� �� ����; 8 - ������� �� ����� ����������; 9 - ������� �� ����; 10 - ������� �� ����� ��������" << endl;
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

    void User::sort_price(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //���������� �� ����
       cout << "�����������: 1 - �� min �� max; 2 - �� max �� min" << endl;
       int indicator;
       cin >> indicator;
       switch (indicator) {
       case 1:
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j-1].MinPrice()>concert[j].MinPrice();j--)
			swap(concert[j-1],concert[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j-1].MinPrice()>festival[j].MinPrice();j--)
			swap(festival[j-1],festival[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j-1].MinPrice()>theater[j].MinPrice();j--)
			swap(theater[j-1],theater[j]);        // ������ ������� �������� j � j-1
	   break;
	   case 2:
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j-1].MinPrice()<concert[j].MinPrice();j--)
			swap(concert[j-1],concert[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j-1].MinPrice()<festival[j].MinPrice();j--)
			swap(festival[j-1],festival[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j-1].MinPrice()<theater[j].MinPrice();j--)
			swap(theater[j-1],theater[j]);        // ������ ������� �������� j � j-1
	   break;
       }
	   show_event(concert, festival, theater);
   }

   void User::sort_date(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //���������� �� ����
       cout << "�����������: 1 - �� ���������� �� ����������; 2 - �� ���������� �� ����������" << endl;
       int indicator;
       cin >> indicator;
       switch (indicator) {
       case 1:
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j-1].time < concert[j].time;j--)
			swap(concert[j-1],concert[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j-1].time < festival[j].time;j--)
			swap(festival[j-1],festival[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j-1].time < theater[j].time;j--)
			swap(theater[j-1],theater[j]);        // ������ ������� �������� j � j-1
	   break;
	   case 2:
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j].time < concert[j-1].time;j--)
			swap(concert[j-1],concert[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j].time < festival[j-1].time;j--)
			swap(festival[j-1],festival[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j].time < theater[j-1].time;j--)
			swap(theater[j-1],theater[j]);        // ������ ������� �������� j � j-1
       break;
       }
      show_event(concert, festival, theater);
   }

   void User::sort_names(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //���������� �� ����� ��������
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j-1].get_Artist() > concert[j].get_Artist();j--)
			swap(concert[j-1],concert[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j-1].get_Artist() > festival[j].get_Artist();j--)
			swap(festival[j-1],festival[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j-1].get_Artist() > theater[j].get_Artist();j--)
			swap(theater[j-1],theater[j]);        // ������ ������� �������� j � j-1
      show_event(concert, festival, theater);
   }

   void User::sort_type(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //���������� �� ���� �������
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j-1].getTypeOfConcert() > concert[j].getTypeOfConcert();j--)
			swap(concert[j-1],concert[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j-1].getTypeOfFestival() > festival[j].getTypeOfFestival();j--)
			swap(festival[j-1],festival[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j-1].getTypeOfTheater() > theater[j].getTypeOfTheater();j--)
			swap(theater[j-1],theater[j]);        // ������ ������� �������� j � j-1
      show_event(concert, festival, theater);
   }

   void User::sort_place(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //���������� �� ����� ����������
       for(int i=1;i<concert.size();i++)
	   for(int j=i;j>0 && concert[j-1].get_Place() > concert[j].get_Place();j--)
			swap(concert[j-1],concert[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<festival.size();i++)
	   for(int j=i;j>0 && festival[j-1].get_Place() > festival[j].get_Place();j--)
			swap(festival[j-1],festival[j]);        // ������ ������� �������� j � j-1
       for(int i=1;i<theater.size();i++)
	   for(int j=i;j>0 && theater[j-1].get_Place() > theater[j].get_Place();j--)
			swap(theater[j-1],theater[j]);        // ������ ������� �������� j � j-1
      show_event(concert, festival, theater);
   }

   void User::date_selection(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //������� �� ����
       vector<Concert> concert_by_date;
       vector<Festival> festival_by_date;
       vector<Theater> theater_by_date;
       cout << "������� ����, ���� dd/mm/yy h:m" << endl;
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

   void User::place_selection(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //������� �� ����� ����������
       vector<Concert> concert_by_place;
       vector<Festival> festival_by_place;
       vector<Theater> theater_by_place;
       cout << "������� ������, ���� \"�����, �����\"" << endl;
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

   void User::price_selection(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //������� �� ����
       vector<Concert> concert_by_price;
       vector<Festival> festival_by_price;
       vector<Theater> theater_by_price;
       cout << "������� ����:" << endl;
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

   void User::name_selection(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //������� �� �����
       vector<Concert> concert_by_name;
       vector<Festival> festival_by_name;
       vector<Theater> theater_by_name;
       cout << "������� ��� ��������:" << endl;
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
