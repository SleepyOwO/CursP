#pragma once
#include "Figure.h"

class trapeze : public Figure {
public:
	trapeze(int _x, int _y, int _a, int _b, int _h) : Figure(_x, _y, _a, _b), height(_h) {
		c_side = sqrt(pow(_b - _a, 2) + _h * _h);
	};
	void draw() const override;
	void hide() const override;
	void replace(int, int) override;
private:
	double c_side;
	int height;
};