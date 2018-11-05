#include "pch.h"
#include "Currency.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Currency::Instances = 0;

Currency::Currency() : Dollars(0), Cents(0) 
{

	/*Dollars = 0;
	Cents = 0;
	Currency :: Dollars = 0
	this->Dollars = 0*/

	printf("Currency constructor\n");
	Currency::Instances++;
}

Currency::Currency(long dollars, int cents) {
	
	Dollars = dollars + cents/100;
	Cents = cents % 100;

	printf("%d, %d", this->Dollars, this->Cents);
	Currency::Instances++;
}


Currency::~Currency()
{
	printf("\nCurrency destructor\n");
	Instances--;
	
}
