#include "Cercle.h"

Cercle::Cercle() {
    demander();
}

void Cercle::demander() {
    int x, y;
    std::cout << "Entrez l'abscisse puis l'ordonnée du centre de ce cercle : ";
    std::cin >> x >> y;
    p1.modify(x, y);

    std::cout << "Entrez le rayon de votre cercle: ";
    std::cin >> r;
}

std::string Cercle::afficher() const {
    return "Cercle passant par " + p1.afficher_point() + " et de rayon: " + std::to_string(r);
}

bool Cercle::est_valide(const Canva& c) const {
    return (p1.get_abscisse + r < c.largeur) && (p1.get_ordonnee + r < c.hauteur);
}

void Cercle::dessiner_cercle(const Canva& c) {
    int x1 = p1.get_abscisse(), y1 = p1.get_ordonnee();
    std::vector<Point> tableau;
    for (int j=0; j < c.hauteur; j++) {
        for (int i = 0; i < c.largeur; i++) {
            if ( (sqrt(pow((j - y1), 2) + pow((i - x1),2))) == r ) {
                std::cout << "*";
                Point a(i, j);
                tableau.push_back(a);
            }
            else std::cout << " ";
        }
        std::cout << std::endl;
    }
    for (auto point : tableau) {
        std::cout << point.afficher_point();
    }
}


int main() {
    Canva b(20, 20);
    Cercle a;
    int j = pow(2,2);
    std::cout << j;
    a.dessiner_cercle(b);
    return 0;
}