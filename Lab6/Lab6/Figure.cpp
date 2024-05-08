#include "Figure.h"

void Figure::draw() const {
	std::cout << "\n����������: " << first.x << " " << first.y;
}

void Figure::hide() const {
	std::cout << "������ ������";
}

void Figure::replace(int new_x, int new_y) {
	this->hide();
	first.x = new_x;
	first.y = new_y;
	this->draw();
}
