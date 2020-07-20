#ifndef FESTIVAL_H
#define FESTIVAL_H

#include <string>
#include <iostream>
#include "Event.h"

using namespace std;

class Festival : public Event
{
    public:
        Festival();
        Festival(string ,string , string , int , int , int , int , int , string , string , int , int , int);
        void add_Type();
        string getTypeOfFestival();
        string getTypeOfEvent();

    protected:

    private:
    string type_of_event = "Фестиваль";
    string type_of_festival;
};

#endif // FESTIVAL_H
