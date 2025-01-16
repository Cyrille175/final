#include "Forme.h"

friend std::ostream& operator<<(std::ostream& os, const Forme& f) {
	os << f.afficher(); << std::endl;
	return os
}