#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <iostream>
#include <vector>
#include <iomanip>
#include "Concert.h"
#include "Festival.h"
#include "Theater.h"

using namespace std;

class Administrator
{
    public:
        void add_event(vector<Concert> & , vector<Festival> & , vector<Theater> & );
        void start(vector<Concert> & , vector<Festival> & , vector<Theater> & );
        void show_event(vector<Concert>, vector<Festival>, vector<Theater>);

    protected:

    private:
};

#endif // ADMINISTRATOR_H
