



class Droite : Public Forme {
private: 
	Point p1, p2;

public: 
	void demander() override; 
	std::string afficher() override;
	bool est_valide() override;
};