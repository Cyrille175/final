#ifndef POINT_H
#define POINT_H
#include "Canva.h"


class Point {
private:
	int _x;
	int _y;
public:
	Point(int x, int y);
	void tracer_point();
	std::string afficher_point() const ;
	void modify(int x, int y);
};

#endif