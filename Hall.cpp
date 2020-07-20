#include "Hall.h"

    Hall::Hall() { } //конструктор

    Hall::Hall(int row, int col) : num_line(row), num_seat(col) {
    setHall();
    } //конструктор

    void Hall::setHall() { //установка значений мест по умолчанию true. true - значит что место свободно. ”становка цены дл€ каждого места.
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

    void Hall::getHall() { //метод вывода мест
       for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[i].size(); j++)
            cout << matrix[i][j] << setw(4);
        cout << "\n";
    }

    cout << "÷ена дл€ каждого места:" << endl;

    for(int i = 0; i < price.size(); i++) //вывод цены дл€ каждого места
    {
        for(int j = 0; j < price[i].size(); j++)
            cout << price[i][j].getPrice() << "$" << setw(4);
        cout << "\n";
    }
    }

    void Hall::reservation(int line, int seat ) { //метод бронировки мест
        if (matrix[line-1][seat-1]) {
            matrix[line-1][seat-1] = false;
            cout << "÷ена билета " << price[line-1][seat-1].getPrice() << "$" << endl; //ƒобавил сегодн€
            cout << "ѕоздравл€ем! ¬ы забронировали место!" << endl;
        }
        else {
            cout << "ћесто уже забронировано!" << endl;
        }
    }

    double Hall::maxPrice() { //расчЄт максимальной цены билета.
    return price[num_line-1][num_seat-1].getPrice();
    }

    double Hall::minPrice() { //расчЄт минимальной цены билета.
    return price[0][0].getPrice();
    }

