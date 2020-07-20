#ifndef TIME_H
#define TIME_H

#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

class Time
{
    public:
        Time();
        Time(int , int , int , int , int );
        void setTime();
        bool checkTime();
        string IntToStr(int);
        string getTime();
        bool operator< (Time & time) const;
        void set_Time(int ,int ,int ,int ,int );

    protected:

    private:
         int year;
         int month;
         int day;
         int hour;
         int minute;
};

#endif // TIME_H
