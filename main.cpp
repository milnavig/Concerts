/*
Терещенко О.І ДА-62

Сделано в CodeBlocks.

Концерты. Создать иерархию концертных событий.
Предусмотреть возможность бронирования мест для разных локаций.
Обеспечить сортировку и выборку по жанру, датам, стоимости, именам участников (исполнителей), месту проведения.
*/

#include <iostream>
#include <vector>
#include "Concert.h"
#include "Festival.h"
#include "Theater.h"
#include "Administrator.h"
#include "User.h"
#include "DB.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    vector<Concert> concert;
    vector<Festival> festival;
    vector<Theater> theater;
    Administrator admin;
    User user;
    DB db;
    int x;

db.add_object(concert, festival, theater);
 try{
    while (true) {
    cout << "Выберете контролер: 1 - администратор, 2 - пользователь, 3 - выйти" << endl;
    cin >> x;

    if (x == 1) {
    admin.start(concert, festival, theater);
    }
    else if (x == 2) {
    user.start(concert, festival, theater);
    }
    else if (x == 3) {
        break;
    }
    else {
        throw 1;
    }
    }
 }
 catch(int message) { cout << "Некоректно введены данные! Ошибка " << message;}

    return 0;
}
