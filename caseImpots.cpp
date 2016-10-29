#include <iostream>
#include "caseImpots.hpp"
#include "joueur.hpp"
#include <string>
#include <algorithm>  


void CaseImpots::landOnBy(Joueur& j)
{
	Case::passOverBy(j);
	std::cout << " Faut payer les impots " << std::endl;
	
	int montantImpots = j.getWorth() / 10;
	j.debit(std::min(montantImpots,maxImpots));
}
