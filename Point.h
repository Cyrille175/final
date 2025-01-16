#ifndef POINT_H
#define POINT_H
#include <string>

class Point {
private:
    int _x;
    int _y;
public:
    Point(int x = 0, int y = 0);
    void modify(int x, int y);
    std::string afficher_point() const;
    int get_abscisse() const;
    int get_ordonnee() const;
};

#endif