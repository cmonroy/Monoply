#include "plateau.hpp"
#include "case.hpp"
#include "caseDepart.hpp"
#include "caseImpots.hpp"
#include "caseTaxe.hpp"
#include "propriete.hpp"
#include "gare.hpp"
#include <string>

#include <sstream>

using namespace std;

Plateau::Plateau()
{
	buildSquares();
	linkSquares();
}

Case* Plateau::getStartSquare(){
	return m_cases[0];
}

void Plateau::build(int i)
{
	if (i == 0) { m_cases[i] = new CaseDepart(); }
	else if (i == 10) { m_cases[i] = new CaseTaxe(); }
	else if (i == 20) { m_cases[i] = new CaseImpots(); }
	else if (i == 25) { m_cases[i] = new Gare("Gare du Nord", 5000); }
	else if (i == 15) { m_cases[i] = new Gare("Gare d'Austerlitz", 5000); }
	else{
		stringstream unStream;
		unStream << "case" << i;
		m_cases[i] = new Case(unStream.str());
	}
}


void Plateau::buildSquares()
{
	for (int i = 0; i < 40; i++){
		build(i);
	}
}

void Plateau::linkSquares()
{
	for (int i = 0; i < 39; i++)
	{
		m_cases[i]->setNextSquare(m_cases[i + 1]);
	}
	m_cases[39]->setNextSquare(m_cases[0]);
}