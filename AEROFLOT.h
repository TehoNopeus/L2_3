#pragma once
#include <iostream>
#include <string>
using namespace std;
class AEROFLOT
{
	string aDist;
	string aNum;
	string aType;

public: AEROFLOT();
	  AEROFLOT(const AEROFLOT& obj);
	  ~AEROFLOT();

	  void setDist(string _aDist);
	  void setNum(string _aNum);
	  void setType(string _aType);

	  string getDist();
	  string getNum();
	  string getType();

	  friend ostream& operator<< (ostream& stream, AEROFLOT obj);
};

