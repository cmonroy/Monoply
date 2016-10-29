#include "case.hpp"
//#include <cstdlib>
#include <string>
#include "joueur.hpp"
#include <iostream>

using namespace std;

Case::Case(string s)
{
	name = s;
	nextSquare = this; //nullptr ou NULL (vaut 0)
}

/* passé en inline
string Case::getName()
{
	return name;
}
*/

void Case::setName(string s)
{
	name=s;
}


Case* Case::getNextSquare()
{
	return nextSquare;
}


void Case::setNextSquare(Case* c)
{
	nextSquare = c;
}

void Case::landOnBy(Joueur& j)
{
	std::cout << " le joueur " << j.getName() << " arrive sur " << name << std::endl;
}

void Case::passOverBy(Joueur& j)
{
	//std::cout << " le joueur " << j.getName() << " passe sur " << name << std::endl;
}