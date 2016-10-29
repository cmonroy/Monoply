#ifndef CaseTaxeHeader
#define CaseTaxeHeader

#include <string>
#include "case.hpp"

class Joueur;

class CaseTaxe : public Case
{
	const int taxe;

public:
	CaseTaxe() : Case("Case Taxe"), taxe(5000){}
	void landOnBy(Joueur&);
};



#endif