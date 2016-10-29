#include <iostream>
#include "joueur.hpp"
#include "case.hpp"
#include "gobelet.hpp"
#include <string>

#include <sstream>

using namespace std;

Joueur::Joueur(string s, Case& c)
{
	name = s;
	setLocation(c);
	m_money = 50000;
}

void Joueur::setLocation(Case& c){
	m_caseCourante = &c;
}

Case* Joueur::getLocation() const{
	return m_caseCourante;
}

void Joueur::step()
{
	m_caseCourante = m_caseCourante->getNextSquare();
}

void Joueur::takeTurn(Gobelet& gob)
{
	gob.roll();
	int resultat = gob.getFaceValue();

	for (int i=0; i < resultat-1; i++){
		step();
		m_caseCourante->passOverBy(*this);
	}
	step();
	m_caseCourante->landOnBy(*this);


	cout << "Le joueur " << getName()
		<< " a fait " << resultat << " avec son dé " 
		<< " et se trouve sur " << m_caseCourante->getName() << endl
		<< " son capital est de " << getWorth() << " francs " << endl	;
}
