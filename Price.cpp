#include "Price.h"

Price::Price(int cof, int line) { //конструктор
setPrice(cof, line);
}

double Price::setPrice(int cof, int line) {
price = cof * (line+1); //формула по которой считаем цену (цена зависит от ряда в зале)
return price;
}

double Price::getPrice() { //возвращает цену
return price;
}
