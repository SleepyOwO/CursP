#include "Triangle.h"

void triangle::draw() const {
	std::cout << "��������� �����������: ";
	Figure::draw();
	std::cout << "\n����� ������: " << a_side << ", " << b_side << ", " << c_side << '\n';
}

void triangle::hide() const {
	std::cout << "\n����������� �����\n";
}

void triangle::replace(int new_x, int new_y) {
	Figure::replace(new_x, new_y);
	std::cout << "\n����������� ���������";
}