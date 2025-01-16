#include "Polygone.h"

void Polygone::demander() {
	int x, y;
	std::cout << "Entrez le nombre de cotes que votre polygone doit avoir: ";
	std::cin >> nombre_de_cotes;

	std::vector<Point> sommets_du_polygone;
	std::cout << "Donnes moi les coordonnees des sommets du polygone: ";
	for (int i = 0; i < nombre_de_cotes; i++) {
		std::cin >> x >> y;
		Point a(x, y);
		sommets_du_polygone.push_back(a);
	}
}

std::string Polygone::afficher() const {
	std::string info = "Polygone a " + std::to_string(nombre_de_cotes) + " cotes et dont les sommets sont mentionnes";
	return info;
}

bool Polygone::est_valide(int largeur, int longueur) const {
	return true;
}

Polygone::Polygone() {
	demander();
}

void Polygone::dessiner(const Canva& c) {
	for (int f = 0; f < nombre_de_cotes; f++) {
		double a = (sommets_du_polygone[f+1].get_ordonnee() - sommets_du_polygone[f].get_ordonnee()) / (sommets_du_polygone[f+1].get_abscisse() - sommets_du_polygone[f].get_abscisse());
		double b = sommets_du_polygone[f].get_ordonnee() - (a * sommets_du_polygone[f].get_abscisse());
		for (int j = 0; j < c.hauteur; j++) {
			for (int i = 0; i < c.largeur; i++) {
				if (((a * i) + b) == j) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
			std::cout << std::endl;
		}
	}

}

int main() {
	Canva b(20, 20);
	Polygone a;
	a.dessiner(b);
	return 0;
}