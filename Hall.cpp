#include "Hall.h"

    Hall::Hall() { } //�����������

    Hall::Hall(int row, int col) : num_line(row), num_seat(col) {
    setHall();
    } //�����������

    void Hall::setHall() { //��������� �������� ���� �� ��������� true. true - ������ ��� ����� ��������. ��������� ���� ��� ������� �����.
    for(int i = 0; i < num_line; ++i)
    {
        vector<int> temp;
        vector<Price> temp2;
        for(int j = 0; j < num_seat; ++j) {
            temp.push_back(true);
            temp2.push_back(Price(cof, i));
        }
        matrix.push_back(temp);
        price.push_back(temp2);
    }
    }

    void Hall::getHall() { //����� ������ ����
       for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[i].size(); j++)
            cout << matrix[i][j] << setw(4);
        cout << "\n";
    }

    cout << "���� ��� ������� �����:" << endl;

    for(int i = 0; i < price.size(); i++) //����� ���� ��� ������� �����
    {
        for(int j = 0; j < price[i].size(); j++)
            cout << price[i][j].getPrice() << "$" << setw(4);
        cout << "\n";
    }
    }

    void Hall::reservation(int line, int seat ) { //����� ���������� ����
        if (matrix[line-1][seat-1]) {
            matrix[line-1][seat-1] = false;
            cout << "���� ������ " << price[line-1][seat-1].getPrice() << "$" << endl; //������� �������
            cout << "�����������! �� ������������� �����!" << endl;
        }
        else {
            cout << "����� ��� �������������!" << endl;
        }
    }

    double Hall::maxPrice() { //������ ������������ ���� ������.
    return price[num_line-1][num_seat-1].getPrice();
    }

    double Hall::minPrice() { //������ ����������� ���� ������.
    return price[0][0].getPrice();
    }

