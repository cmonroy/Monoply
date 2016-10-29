#ifndef CaseDepartHeader
#define CaseDepartHeader
#include <iostream>
#include <string>
#include "case.hpp"

class Joueur;

class CaseDepart : public Case
{
	const int cadeau;

public:
	CaseDepart() : Case("Case Depart"), cadeau(20000){}
	void landOnBy(Joueur&);
	void passOverBy(Joueur&);

};






#endif