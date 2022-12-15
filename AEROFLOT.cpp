#include "AEROFLOT.h"

AEROFLOT::AEROFLOT()
{
	//cout << "Default fly/n";
	aDist = "";
	aNum = "";
	aType = "";
}

AEROFLOT::AEROFLOT(const AEROFLOT& obj)
{
	//cout << "Fly Constructor\n";
	aDist = obj.aDist;
	aNum = obj.aNum;
	aType = obj.aType;
}

AEROFLOT::~AEROFLOT()
{
	//cout <<"Deconstructor\n";
}

void AEROFLOT::setDist(string _aDist)
{
	aDist = _aDist;
}

void AEROFLOT::setNum(string _aNum)
{
	aNum = _aNum;
}

void AEROFLOT::setType(string _aType)
{
	aType = _aType;
}

string AEROFLOT::getDist()
{
	return aDist;
}

string AEROFLOT::getNum()
{
	return aNum;
}

string AEROFLOT::getType()
{
	return aType;
}

ostream& operator<<(ostream& stream, AEROFLOT obj)
{
	stream << "Plain\n" << "Final Destination: " << obj.getDist() << endl <<
		"Fly Number: " << obj.getNum() << endl << "Plain Type: " << obj.getType() << endl;
	return stream;
}
