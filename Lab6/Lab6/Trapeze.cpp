#include "Trapeze.h"

void trapeze::draw() const {
	std::cout << "Нарисована трапеция: ";
	Figure::draw();
	std::cout << "\nОснования: " << a_side << ", " << b_side << "\nВысота: " << height << '\n';
}

void trapeze::hide() const {
	std::cout << "\nТрапеция скрыта\n";
}

void trapeze::replace(int new_x, int new_y) {
	Figure::replace(new_x, new_y);
	std::cout << "\nТрапеция перемещена";
}