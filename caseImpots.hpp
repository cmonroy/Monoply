#ifndef CaseImpotsHeader
#define CaseImpotsHeader

#include <string>
#include "case.hpp"

class Joueur;

class CaseImpots : public Case
{
	const int maxImpots;

public:
	CaseImpots() : Case("Case Impots"), maxImpots(5000){}
	void landOnBy(Joueur&);
};



#endif