#include <iostream>
#include "monopoly.hpp"
#include "joueur.hpp"
#include <string>
#include <sstream>

std::string noms[] = { "Denis", "Billy", "Charles", "NicolasB", "FatimaDoudoune" };

Monopoly::Monopoly(int nbj, int nbt) : nbJoueurs(nbj), nbTours(nbt)
{
	for (int i = 0; i < nbJoueurs; i++){
		//lesJoueurs[i] = new Joueur(noms[i], *plateau.getStartSquare());
		lesJoueurs.push_back(new Joueur(noms[i], *plateau.getStartSquare()));
	}
}
Monopoly::~Monopoly(){
	
	
	for (int i = 0; i < nbJoueurs; i++){
		delete lesJoueurs[i];
	}
	
	
	// ou
	/*
	for (auto j : lesJoueurs){
		delete j;
	}
	*/

}


void Monopoly::demarrer(){
	for (int t = 0; t < nbTours; t++){
		
		std::cout << " " << std::endl;
		std::cout << " Tour " << t << std::endl;
		std::cout << " " << std::endl;

		for (int i = 0; i < nbJoueurs; i++)
		{
			lesJoueurs[i]->takeTurn(gobelet);
		}
	}
	
	int aux=0;
	int indexVainqueur=0;
	for (int i = 0; i < 5; i++){
		if (lesJoueurs[i]->getWorth()>aux)
		{
		aux=lesJoueurs[i]->getWorth();
		indexVainqueur=i;
		}
	}

	std::cout << std::endl;
	std::cout << "Le vainqueur est " << noms[indexVainqueur] << "!!!!!!!!" << std::endl;
}
