#ifndef CONCERT_H
#define CONCERT_H

#include <string>
#include <iostream>
#include "Event.h"

using namespace std;

class Concert : public Event
{
    public:
        Concert();
        Concert(string ,string , string , int , int , int , int , int , string , string , int , int , int);
        void add_Type();
        string getTypeOfConcert();
        string getTypeOfEvent();

    protected:

    private:
    string type_of_event = "Концерт";
    string type_of_concert;
};

#endif // CONCERT_H
