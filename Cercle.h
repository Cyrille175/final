#ifndef CERCLE_H
#define CERCLE_H
#include "Point.h"
#include "Forme.h"
#include "Canva.h"
#include <cmath>
#include <string>

class Cercle : public Forme {
private:
    Point p1;
    int r;

public:
    Cercle();
    void dessiner_cercle(const Canva& c);
    void demander() override;
    std::string afficher() const override;
    bool est_valide(int largeur, int hauteur) const override;
};

#endif