#include "Canva.h"

Canva::Canva(int l, int h) : largeur(l), hauteur(h) {
	for (int j = 0; j < hauteur; j++) {
		for (int i = 0; i < largeur; i++) {
			std::cout << " ";
		}
	}
}

