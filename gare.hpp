#ifndef GareHeader
#define GareHeader
#include <string>
#include "propriete.hpp"


class Gare : public Propriete
{
public : 
	Gare(std::string n, int prix) : Propriete(n, prix) {}

protected:
	/*virtual*/ int getLoyer() { return 500; }
};

#endif
