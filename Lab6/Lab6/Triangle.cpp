#include "Triangle.h"

void triangle::draw() const {
	std::cout << "Нарисован треугольник: ";
	Figure::draw();
	std::cout << "\nДлины сторон: " << a_side << ", " << b_side << ", " << c_side << '\n';
}

void triangle::hide() const {
	std::cout << "\nТреугольник скрыт\n";
}

void triangle::replace(int new_x, int new_y) {
	Figure::replace(new_x, new_y);
	std::cout << "\nТреугольник перемещён";
}