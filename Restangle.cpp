#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : largeur(0), hauteur(0) {}

void Rectangle::demander() {
    int x, y, l, h;
    std::cout << "Entrez les coordonnées du coin supérieur gauche : ";
    std::cin >> x >> y;
    coin_superieur_gauche.modify(x, y);

    std::cout << "Entrez la largeur et la hauteur : ";
    std::cin >> l >> h;
    largeur = l;
    hauteur = h;
}

std::string Rectangle::afficher() const {
    return "Rectangle de coin supérieur gauche " + coin_superieur_gauche.afficher_point() +
        " de largeur " + std::to_string(largeur) +
        " et hauteur " + std::to_string(hauteur);
}

bool Rectangle::est_valide(int largeur, int hauteur) const {
    return true;
}

void Rectangle::dessiner(const Canva& c) {
    int x = coin_superieur_gauche.get_abscisse();
    int y = coin_superieur_gauche.get_ordonnee();

    for (int j = 0; j < c.hauteur; j++) {
        for (int i = 0; i < c.largeur; i++) {
            if (i >= x && i < x + largeur && j >= y && j < y + hauteur) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}