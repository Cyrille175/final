#include "Point.h"

Point::Point(int x, int y) : _x(x), _y(y) {}

void Point::modify(int x, int y) {
    if (x >= 0 && y >= 0) {
        _x = x;
        _y = y;
    }
}

std::string Point::afficher_point() const {
    return "(" + std::to_string(_x) + "," + std::to_string(_y) + ")";
}

int Point::get_abscisse() const {
    return _x;
}

int Point::get_ordonnee() const  {
    return _y;
}