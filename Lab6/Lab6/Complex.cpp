#include "Complex.h"

void complex::draw() const {
	std::cout << "������� ������ ����������\n";
	trian->draw();
	trap->draw();
}

void complex::hide() const {
	std::cout << "������� ������ ������\n";
}