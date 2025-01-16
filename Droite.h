#ifndef DROITE_H
#define DROITE_H
#include "Point.h"
#include <string>
#include <iostream>
#include "Canva.h"
#include "Forme.h"


class Droite : public Forme {
private: 
	Point p1, p2;
	int x1, x2, y1, y2;
public: 
	Droite();
	void dessiner_droite(const Canva& c);
	void demander() override; 
	std::string afficher() const override;
	bool est_valide() const override;
};

#endif