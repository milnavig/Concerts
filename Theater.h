#ifndef THEATER_H
#define THEATER_H

#include <string>
#include <iostream>
#include "Event.h"

using namespace std;


class Theater : public Event
{
    public:
        Theater();
        Theater(string ,string , string , int , int , int , int , int , string , string , int , int , int);
        void add_Type();
        string getTypeOfTheater();
        string getTypeOfEvent();

    protected:

    private:
    string type_of_event = "Театр";
    string type_of_theater;
};

#endif // THEATER_H
