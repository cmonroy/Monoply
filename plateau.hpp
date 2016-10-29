#ifndef PlateauHeader
#define PlateauHeader

#include <string>
#include "case.hpp"

class Plateau
{
public:
	Plateau();
	void build(int);
	void buildSquares();
	void linkSquares();
	Case* getStartSquare();

private:
	enum { nbCases = 40 };
	Case* m_cases[nbCases];
};


#endif