#ifndef POLYGONE_H
#define POLYGONE_H
#include "Forme.h"
#include "Point.h"
#include "Canva.h"
#include <cmath>
#include <string>

class Polygone : public Forme {
private: 
	int nombre_de_cotes; 
	std::vector<Point> sommets_du_polygone;

public:
	void demander() override;
	std::string afficher() const override;
	bool est_valide(int largeur, int hauteur) const override;
	Polygone();
	void dessiner(const Canva& c);
};

#endif