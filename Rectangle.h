#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Forme.h"
#include "Point.h"
#include "Canva.h"
#include <cmath>
#include <string>

class Rectangle : public Forme {
private:
    Point coin_superieur_gauche;
    int largeur;
    int hauteur;

public:
    Rectangle();
    void demander() override;
    std::string afficher() const override;
    bool est_valide(const Canva& c) const override;
    void dessiner(const Canva& c) ;
};

#endif