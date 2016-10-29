#ifndef GobeletHeader
#define GobeletHeader

#include <string>
#include "de.hpp"

class Gobelet
{
public:
	Gobelet();
	int getFaceValue() const;
	void roll();

private:
	De* De1;
	De* De2;
};


#endif