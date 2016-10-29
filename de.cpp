#include "de.hpp"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

De::De()
{
	m_faceValue = 0;
	srand((unsigned int)time(0));
}


int De::getFaceValue() const
{
	return m_faceValue;
}


void De::roll()
{
	//m_faceValue = rand()%6+1;
	// double ou int?
	m_faceValue = (double)rand() / RAND_MAX * 6 + 1;
}
