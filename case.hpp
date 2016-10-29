#ifndef CaseHeader
#define CaseHeader
#include <iostream>
#include <string>

class Joueur;

class Case
{
public:
	Case(std::string);
	std::string getName() { return name; } // exemple de fonction inline
	void setName(std::string);
	Case* getNextSquare();
	void setNextSquare(Case*);
	virtual void landOnBy(Joueur&);
	virtual void passOverBy(Joueur&);

private:
	std::string name;
	Case* nextSquare;
};


#endif