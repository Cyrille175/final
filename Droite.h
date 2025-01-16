#ifndef DROITE_H
#define DROITE_H
#include "Point.h"
#include "Forme.h"
#include "Canva.h"
#include <cmath>
#include <string>

class Droite : public Forme {
private:
    Point p1, p2;

public:
    Droite();
    void dessiner_droite(const Canva& c);
    void demander() override;
    std::string afficher() const override;
    bool est_valide(int largeur, int hauteur) const override;
};

#endif
