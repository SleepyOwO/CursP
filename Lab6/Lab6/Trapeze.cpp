#include "Trapeze.h"

void trapeze::draw() const {
	std::cout << "���������� ��������: ";
	Figure::draw();
	std::cout << "\n���������: " << a_side << ", " << b_side << "\n������: " << height << '\n';
}

void trapeze::hide() const {
	std::cout << "\n�������� ������\n";
}

void trapeze::replace(int new_x, int new_y) {
	Figure::replace(new_x, new_y);
	std::cout << "\n�������� ����������";
}