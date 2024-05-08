#include "Complex.h"

void complex::draw() const {
	std::cout << "Сложная фигура нарисована\n";
	trian->draw();
	trap->draw();
}

void complex::hide() const {
	std::cout << "Сложная фигура скрыта\n";
}