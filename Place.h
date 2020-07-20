#ifndef PLACE_H
#define PLACE_H

#include <iostream>

using namespace std;

class Place
{
    public:
        Place();
        Place(string , string );
        void setPlace();
        string getPlace();
        void set_Place(string ,string );

    protected:

    private:
         string city;
         string address;
};

#endif // PLACE_H
