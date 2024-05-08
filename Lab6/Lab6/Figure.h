#pragma once
#include <iostream>
#include <cmath>

struct Point {
	int x, y;
};

class Figure{
public:
	Figure() {};
	Figure(int _x, int _y, int _a, int _b) : first{ _x, _y }, a_side(_a), b_side(_b) {};
	virtual void draw() const;
	virtual void hide() const;
	virtual void replace(int, int);
protected:
	int a_side, b_side;
	Point first;
};