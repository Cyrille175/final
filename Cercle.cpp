#include "Cercle.h"

Cercle::Cercle() {
    demander();
}

void Cercle::demander() {
    int x, y;
    std::cout << "Entrez l'abscisse puis l'ordonnée du premier point : ";
    std::cin >> x >> y;
    p1.modify(x, y);

    std::cout << "Entrez le rayon de votre cercle: ";
    std::cin >> r;
}

std::string Cercle::afficher() const {
    return "Cercle passant par " + p1.afficher_point() + " et de rayon: " + std::to_string(r);
}

bool Cercle::est_valide(int largeur, int hauteur) const {
    return true;
}

void Cercle::dessiner_cercle(const Canva& c) {
    int x1 = p1.get_abscisse(), y1 = p1.get_ordonnee();

    for (int j=0; j < c.hauteur; j++) {
        for (int i = 0; i < c.largeur; i++) {
            if ((sqrt(((j - y1) ^ 2) + ((i - x1) ^ 2))) == r) {
                std::cout << "*";
            }
            else std::cout << " ";
        }
        std::cout << std::endl;
    }
}
