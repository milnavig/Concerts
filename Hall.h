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

        int cof; //���������� ��� ����
        int num_line; //���������� �����
        int num_seat; //���������� ���� � ������ ����

        void setHall();
        void getHall();
        void reservation(int , int );
        double maxPrice();
        double minPrice();

    protected:

    private:
    std::vector<std::vector<int> > matrix; //������� ������� �������� ��� ����� � ����
    std::vector<std::vector<Price> > price;  //������� ������� �������� ���� ��� ������� �����
};

#endif // HALL_H
