#include <stdlib.h>
#include <string.h>
#pragma once
class Currency
{
	static int Instances;
	long Dollars;
	int Cents;

public:
	Currency();
	Currency(long, int);
	~Currency();
	static int GetInstances() { return Currency::Instances; }

};


