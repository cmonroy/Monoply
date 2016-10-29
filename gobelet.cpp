#include "gobelet.hpp"
#include "de.hpp"
#include <string>

using namespace std;

Gobelet::Gobelet()
{
	De1 = new De();
	De2 = new De();
}

int Gobelet::getFaceValue() const
{
	return De1->getFaceValue() + De2->getFaceValue();
}


void Gobelet::roll()
{
	De1->roll();
	De2->roll();
}
