#include "Cercle.h"

Cercle::Cercle() {
    demander();
}

void Cercle::demander() {
    int x, y, xx, yy;
    std::cout << "Entrez l'abscisse puis l'ordonnée du premier point : ";
    std::cin >> x >> y;
    p1.modify(x, y);

    std::cout << "Entrez l'abscisse puis l'ordonnée du deuxième point : ";
    std::cin >> xx >> yy;
    p2.modify(xx, yy);
}

std::string Cercle::afficher() const {
    return "Cercle passant par " + p1.afficher_point() + " et " + p2.afficher_point();
}

bool Cercle::est_valide(int largeur, int hauteur) const {
    return true;  
}

void Cercle::dessiner_droite(const Canva& c) {
    int x1 = p1.get_abscisse(), y1 = p1.get_ordonnee();
    int x2 = p2.get_abscisse(), y2 = p2.get_ordonnee();

    if (x1 == x2) {
        for (int j = 0; j < c.hauteur; j++) {
            for (int i = 0; i < c.largeur; i++) {
                if (i == x1) {
                    std::cout << "*";
                }
                else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
    }
    else {
        double a = (y2 - y1) / (x2 - x1);
        double b = y1 - (a * x1);
        for (int j = 0; j < c.hauteur; j++) {
            for (int i = 0; i < c.largeur; i++) {
                if (std::round((a * i) + b) == j) {
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
    Cercle a;
    a.dessiner_droite(b);
    return 0;
}