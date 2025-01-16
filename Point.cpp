#include "Point.h"

Point::Point(int x, int y) : _x(x), _y(y) {
	if (_x > largeur || _y > hauteur) {
		std::cout << "Ce point ne se trouve pas dans la zone definie";
	}
	else {
		for (int j = 0; j < hauteur; j++) {
			for (int i = 0; i < largeur; i++) {
				if (i == _x && j == _y) {
					std::cout << "*";
				}
			}
		}
	}	
}

std::string Point::afficher_point() const {
	std::string info1 = "(" + std::to_string(_x);
	std::string info2 = "," + std::to_string(_y) + ")";
	return info1 + info2;
}