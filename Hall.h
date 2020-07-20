#ifndef HALL_H
#define HALL_H
#include <vector>
#include <iostream>
#include <iomanip>
#include "Price.h"

using namespace std;

class Hall
{
    public:
        Hall();
        Hall(int, int);

        int cof; //коефициент для цены
        int num_line; //количество рядов
        int num_seat; //количество мест в каждом ряду

        void setHall();
        void getHall();
        void reservation(int , int );
        double maxPrice();
        double minPrice();

    protected:

    private:
    std::vector<std::vector<int> > matrix; //матрица которая содержит все места в зале
    std::vector<std::vector<Price> > price;  //матрица которая содержит цену для каждого места
};

#endif // HALL_H
