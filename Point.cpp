#include "Point.h"

Point::Point(int x, int y) : _x(x), _y(y) {
   	
}

std::string Point::afficher_point() const {
	std::string info1 = "(" + std::to_string(_x);
	std::string info2 = "," + std::to_string(_y) + ")";
	return info1 + info2;
}

void Point::modify(int x, int y) {
	if (x > 0, y > 0) {
		_x = x;
		_y = y;
	}	
}