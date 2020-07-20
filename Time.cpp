#include "Time.h"

Time::Time()
{
         year = 2017;
         month = 1;
         day = 1;
         hour = 0;
         minute = 0;
}

         Time::Time(int our_year, int our_month, int our_day, int our_hour, int our_minute) : year(our_year),
         month(our_month), day(our_day), hour(our_hour), minute(our_minute) {
         } //конструтор принимает данные


         void Time::setTime() { //устанавливает время
            cout << "Введите день: ";    //cin >> day;
            while(!(cin >> day)){
              cin.clear();
              while (cin.get()!='\n'){
              cout << "Вы ввели неверный сивол!"<<endl;
              cout << "Повторите ввод"<<endl;
             }
             }
            cout << "Введите месяц: ";  // cin >> month;
            while(!(cin >> month)){
              cin.clear();
              while (cin.get()!='\n'){
              cout << "Вы ввели неверный сивол!"<<endl;
              cout << "Повторите ввод"<<endl;
             }
             }
            cout << "Введите год: ";     //cin >> year;
             while(!(cin >> year)){
              cin.clear();
              while (cin.get()!='\n'){
              cout << "Вы ввели неверный сивол!"<<endl;
              cout << "Повторите ввод"<<endl;
             }
             }
            cout << "Введите время: ";   //cin >> hour;
            while(!(cin >> hour)){
              cin.clear();
              while (cin.get()!='\n'){
              cout << "Вы ввели неверный сивол!"<<endl;
              cout << "Повторите ввод"<<endl;
             }
             }
            cout << "Введите минуты: ";  //cin >> minute;
            while(!(cin >> minute)){
              cin.clear();
              while (cin.get()!='\n'){
              cout << "Вы ввели неверный сивол!"<<endl;
              cout << "Повторите ввод"<<endl;
             }
             }

            if (!checkTime()) {
                cout << "Не верно введена дата!" << endl;
                setTime();
            } //cout << "Не верно введена дата!" << endl;
         }

         bool Time::checkTime() { //проверка времени на коректность
           if ((day > 0)&&(day <= 31)&&(month > 0)&&(month <= 12)&&(year > 0)&&(hour >= 0)&&(hour <24)&&(minute >= 0)&&(minute < 60)) {
           return true; }
           else {return false;}
         }

         string Time::IntToStr(int x){ //функция преобразования int в string
           char buf[20];
           sprintf(buf,"%d",x);
           return buf;
         }

         string Time::getTime() { //возвращает время
           return IntToStr(day) + "/" + IntToStr(month) + "/" + IntToStr(year) + " " + IntToStr(hour) + ":" + IntToStr(minute);
         }

         bool Time::operator< (Time & time) const {
           const int YEAR = 2016;
           const int DAY_IN_YEAR = 365;
           const int DAY_IN_MONTH = 30;
           const int HOUR = 24;
           const int MINUTES = 60;
           int allTime1 = (year - YEAR)*DAY_IN_YEAR*HOUR*MINUTES+(month-1)*DAY_IN_MONTH*HOUR*MINUTES+(day-1)*HOUR*MINUTES+(hour-1)*MINUTES+minute;
           int allTime2 = (time.year - YEAR)*DAY_IN_YEAR*HOUR*MINUTES+(time.month-1)*DAY_IN_MONTH*HOUR*MINUTES+(time.day-1)*HOUR*MINUTES+(time.hour-1)*MINUTES+time.minute;
           if (allTime1 < allTime2) return true;
           return false;
         }


         void Time::set_Time(int year,int month,int day,int hour,int minute) {
         this->year = year;
         this->month = month;
         this->day = day;
         this->hour = hour;
         this->minute = minute;
         }

