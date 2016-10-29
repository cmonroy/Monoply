#include <iostream>

#include "de.hpp"
#include "gobelet.hpp"
#include "case.hpp"
#include "plateau.hpp"
#include "joueur.hpp"
#include "monopoly.hpp"
using namespace std;


void testDe() {
	De De1;
	int resultat = De1.getFaceValue();

	cout << "valeur initiale " << resultat << endl;

	for (int i = 0; i < 20; i++)
	{
		De1.roll();
		resultat = De1.getFaceValue();
		cout << " -> " << resultat << std::endl;
	}
}

void testGobelet() {
	Gobelet gob;
	int resultat = gob.getFaceValue();

	cout << "valeur initiale " << resultat << endl;

	for (int i = 0; i < 20; i++)
	{
		gob.roll();
		resultat = gob.getFaceValue();
		cout << " -> " << resultat << std::endl;
	}
}

void testCase() {
	cout << "test de case" << endl;
	Case laPremiere("premiere");
	
	cout << laPremiere.getName() << endl;

	Case laSeconde("seconde");
	laPremiere.setNextSquare(&laSeconde);
	cout << laPremiere.getNextSquare()->getName() << endl;
}

void testPlateau() {
	cout << "test de plateau " << endl;

	Plateau plateau;

	Case * laCase = plateau.getStartSquare();
	cout << "case : " << laCase->getName() << endl;

	for (int i = 0; i < 42; i++){
		laCase = laCase->getNextSquare();
		cout << " case : " << laCase->getName() << endl;
	}

}

void testJoueur() {
	cout << "test de joueur " << endl;

	Plateau plateau;
	//Case * laCase = plateau.getStartSquare();
	//cout << "case : " << laCase->getName() << endl;

	Case caseDepart = *plateau.getStartSquare();
	Joueur toto("Pion", caseDepart);

	Gobelet gob1;
	toto.takeTurn(gob1);
}

/*
void quiEstLeVainqueur(Monopoly jeu) {

	int aux=0;
	int indexVainqueur=0;
	for (int i = 0; i < 5; i++){
		if (jeu.lesJoueurs[i].getWorth()>aux)
		{
		aux=jeu.lesJoueurs[i].getWorth();
		indexVainqueur=i;
		}
	}

}*/

int main()
{
	//testDe();
	//testGobelet();
	//testCase();
	//testPlateau();
	//testJoueur();
	Monopoly jeu(5, 30);
	jeu.demarrer();

//	system("pause");

	return 0;
}
