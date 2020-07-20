#include "Administrator.h"


    void Administrator::add_event(vector<Concert> & concert, vector<Festival> & festival, vector<Theater> & theater) { //���������� �������
       int type;
       bool indicator = true;
       while (indicator) {
        cout << "�������� ��� �������: 1 - �������, 2 - ���������, 3 - ����������� �������" << endl;
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
          cout << "������� �� 1, 2, 3" << endl;
        }

        cout << "���� ������ ����� �� ������ ���������� ������� ������� 0, ����� ������ �������" << endl;
        cin >> type;
        if (type == 0) indicator = false;
       }
    }

    void Administrator::start(vector<Concert> & concert, vector<Festival> & festival, vector<Theater> & theater) { //�������� �������
      int variant;
      bool indicator = true;
       while (indicator) {
       cout << "�������� ��� ������: 1 - �������� �������, 2 - ������� �� ����� �������, 3 - ����� �� ��������������" << endl;
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
         cout << "��������� ������� ��������!";
      }
     }
    }

    void Administrator::show_event(vector<Concert> concert, vector<Festival> festival, vector<Theater> theater) { //����� �������
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
