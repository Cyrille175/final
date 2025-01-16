#ifndef FORME_H
#define FORME_H
#include <string>
#include <iostream>

class Forme {
private: 
	std::string _couleur_trait; 
	std::string _couleur_remplissage;


public:
	virtual void demander() = 0;
	virtual std::string afficher() const = 0;
	virtual bool est_valide() const = 0;
	friend std::ostream& operator<<(std::ostream& os, const Forme& f);
};


#endif 