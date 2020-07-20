#include "DB.h"

DB::DB() : con1("C","B","A", 2017,3,4,5,8,"A","D",4, 5, 7),con2("A","C","D", 2017,3,4,5,6,"D","Z",4, 5, 5),
    con3("B","A","B", 2016,3,4,5,6,"D","D",5, 5, 8), fest1("E","A","C", 2017,3,4,5,4,"B","C",4, 5, 3),
    fest2("A","D","A", 2017,3,4,5,6,"T","T",4, 5, 5), fest3("D","A","D", 2018,3,4,5,6,"T","A",4, 5, 4),
    theat1("A","A","Z", 2017,3,1,5,6,"A","A",4, 5, 4), theat2("B","A","E", 2017,2,4,5,6,"A","A",4, 5, 2),
    theat3("Z","Z","A", 2017,3,4,4,6,"B","A",4, 5, 8)
{
    //ctor
}

    void DB::add_object(vector<Concert> & concert, vector<Festival> & festival, vector<Theater> & theater) {
    concert.push_back(con1);
    concert.push_back(con2);
    concert.push_back(con3);
    festival.push_back(fest1);
    festival.push_back(fest2);
    festival.push_back(fest3);
    theater.push_back(theat1);
    theater.push_back(theat2);
    theater.push_back(theat3);
    }
