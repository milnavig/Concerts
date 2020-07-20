#ifndef DB_H
#define DB_H

#include <iostream>
#include <vector>
#include "Concert.h"
#include "Festival.h"
#include "Theater.h"
using namespace std;

class DB
{
    public:
        DB();
        Concert con1;
        Concert con2;
        Concert con3;
//        Concert con4;
        Festival fest1;
        Festival fest2;
        Festival fest3;
//        Festival fest4;
        Theater theat1;
        Theater theat2;
        Theater theat3;
 //       Theater theat4;
        void add_object(vector<Concert> & , vector<Festival> & , vector<Theater> & );

    protected:

    private:
};

#endif // DB_H
