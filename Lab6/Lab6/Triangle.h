#pragma once
#include "Figure.h"

class triangle : public Figure {
public:
	triangle(int _x, int _y, int _a, int _b) : Figure(_x, _y, _a, _b) {
		c_side = sqrt(_a * _a + _b * _b);
	};
	void draw() const override;
	void hide() const override;
	void replace(int, int) override;
private:
	double c_side;
};