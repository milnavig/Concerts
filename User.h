#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
#include <iomanip>
#include "Concert.h"
#include "Festival.h"
#include "Theater.h"

using namespace std;

class User
{
    public:
        void show_event(vector<Concert>, vector<Festival>, vector<Theater>);
        void toReservate(vector<Concert> & , vector<Festival> & , vector<Theater> & );
        void start(vector<Concert> & , vector<Festival> & , vector<Theater> & );
        void sort_price(vector<Concert>, vector<Festival>, vector<Theater>);
        void sort_date(vector<Concert>, vector<Festival>, vector<Theater>);
        void sort_names(vector<Concert>, vector<Festival>, vector<Theater>);
        void sort_type(vector<Concert>, vector<Festival>, vector<Theater>);
        void sort_place(vector<Concert>, vector<Festival>, vector<Theater>);
        void date_selection(vector<Concert>, vector<Festival>, vector<Theater>);
        void price_selection(vector<Concert>, vector<Festival>, vector<Theater>);
        void name_selection(vector<Concert>, vector<Festival>, vector<Theater>);
        void place_selection(vector<Concert>, vector<Festival>, vector<Theater>);

    protected:

    private:
};

#endif // USER_H
