#ifndef FORME_H
#define FORME_H
#include <cmath>
#include <string>
#include <vector>

class Forme {
protected:
    std::string couleur_trait;
    std::string couleur_remplissage;

public:
    virtual void demander() = 0;
    virtual std::string afficher() const = 0;
    virtual bool est_valide(int largeur, int hauteur) const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Forme& f) {
        os << f.afficher();
        return os;
    }

    virtual ~Forme() = default;
};

#endif