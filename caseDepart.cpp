#include <iostream>
#include <string>
#include "caseDepart.hpp"
#include "joueur.hpp"

void CaseDepart::passOverBy(Joueur& j)
{
	Case::passOverBy(j);
	std::cout << " Passe par la case Depart " << std::endl;
	j.credit(cadeau);
}

void CaseDepart::landOnBy(Joueur& j)
{
	Case::passOverBy(j);
	std::cout << " Arrive sur la case Depart " << std::endl;
	j.credit(2*cadeau);
}