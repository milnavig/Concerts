#include "Price.h"

Price::Price(int cof, int line) { //�����������
setPrice(cof, line);
}

double Price::setPrice(int cof, int line) {
price = cof * (line+1); //������� �� ������� ������� ���� (���� ������� �� ���� � ����)
return price;
}

double Price::getPrice() { //���������� ����
return price;
}
