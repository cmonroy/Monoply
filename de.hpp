#ifndef DeHeader
#define DeHeader

#include <string>

class De
{
public:
	De();
	int getFaceValue() const;
	void roll();
	int setFaceValue();

private:
	int m_faceValue;
};

#endif