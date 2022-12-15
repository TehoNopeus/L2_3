#pragma once
#include "AEROFLOT.h"
class MakeReal
{
	AEROFLOT* data;
	int size;

public: 
	MakeReal();
	~MakeReal();
	void add();
	void del();
	void sort();
	void search();
	void print();
	void red();

};

