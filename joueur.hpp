#ifndef JoueurHeader
#define JoueurHeader

#include <string>
//#include "case.hpp"
//#include "gobelet.hpp"

class Gobelet;
class Case;

class Joueur
{
public:
	Joueur(std::string, Case&);
	void step();
	void takeTurn(Gobelet&);
	std::string getName() const { return name; } ;
	void setName(std::string s) { name = s; };
	Case* getLocation() const;
	void setLocation(Case&);
	int getWorth() const { return m_money; };
	void credit(int francs) { m_money=m_money+francs; };
	void debit(int francs) { m_money = m_money - francs; };


private:
	std::string  name;
	Case* m_caseCourante;
	int  m_money;
};


#endif