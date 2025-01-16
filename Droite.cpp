#include "Droite.h"

void Droite::demander() {
	int x, xx, y, yy;
	std::cout << "Entrez l'absicce puis l'ordonnée du premier point" << std::endl;
	std::cin >> x;
	std::cin >> y;
	p1.modify(x, y);
	x1 = x;
	y1 = y;
	std::cout << "Entrez l'absicce puis l'ordonnée du deuxieme point" << std::endl;
	std::cin >> xx;
	std::cin >> yy;
	p2.modify(xx, yy);
	x2 = xx;
	y2 = yy;
}

std::string Droite::afficher() const {
	std::string info = "Il s'agit d'une droite passant par les points de coordonnees ";
	std::string et = " et ";
	return info + p1.afficher_point() + et + p2.afficher_point();
}

bool Droite::est_valide() const {
	return true;
}

Droite::Droite() {
	demander();
}

void Droite::dessiner_droite(const Canva& c) {
	demander();
	int a = (y2 - y1) / (x2 - x1);
	int b = y1 - (a * x1);
	for (int j = 0; j < c.hauteur; j++) {
		for (int i = 0; i < c.largeur; i++) {
			if (((a * i) + b) == j) {
				std::cout << "*";
			}
			else std::cout << " ";
		}
	}
}


int main() {
	Canva b(20, 20);
	Droite a;
	return 0;
}