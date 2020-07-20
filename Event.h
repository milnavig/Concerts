#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <string>
#include "Time.h"
#include "Place.h"
#include "Hall.h"
using namespace std;

class Event
{
    public:
      //  Event();
        void reserv();
        string get_Date();
        string get_Place();
        string get_Artist();
        string get_Title();
        double MaxPrice();
        double MinPrice();

    protected:
    string title; //�������� �������
    string type_of_event; //��� �������
    string artist; // ��� ������� ��� �����
    public:
    Time time;
    protected:
    Place place;

    void add_Date();
    void add_Place();

    virtual void add_Type() = 0;

    int num_seat; //���������� ���� � ����
    int num_line; //���������� �����
    int our_cof;  //���������� ��� ����
    Hall myHall;

    void add_Hall();
    void add_Artist();
    void add_Title();

    private:
};

#endif // EVENT_H
