#include <iostream>
#include "caseTaxe.hpp"
#include "joueur.hpp"
#include <string>


void CaseTaxe::landOnBy(Joueur& j)
{
	Case::passOverBy(j);
	std::cout << " Faut payer la taxe " << std::endl;
	j.debit(taxe);
}