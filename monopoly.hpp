#ifndef MonopHeader
#define MonopHeader

#include <string>
#include <vector>
#include "plateau.hpp"
#include "gobelet.hpp"
class Joueur;



class Monopoly
{
	Plateau plateau;
	Gobelet gobelet;
//	Joueur* lesJoueurs[5];
	std::vector<Joueur*> lesJoueurs;

	int nbJoueurs;
	int nbTours;


public :
	Monopoly(int nbj, int nbt);
	~Monopoly();
	void demarrer();
};


#endif