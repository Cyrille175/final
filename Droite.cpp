#include "Droite.h"

void Droite::demander() override {
	std::cout << "Entrez l'absicce puis l'ordonnée du premier point" << std::endl;
	std::cin >> x1;
	std::cin >> y1;
	p1(x1, y1);
	std::cout << "Entrez l'absicce puis l'ordonnée du deuxieme point" << std::endl;
	std::cin >> x2;
	std::cin >> y2;
	p2(x2, y2);
}

std::string Droite::afficher() const override {
	std::string info = "Il s'agit d'une droite passant par les points de coordonnees ";
	std::string et = " et ";
	return info + p1.afficher_point() + et + p2.afficher_point();
}

bool Droite::est_valide() const override {

}