#include "pch.h"
#include <iostream>
#include <stdio.h>
#include "Currency.h"

int main()
{

	Currency b, c, a(13, 103);
	printf("%d", Currency::GetInstances());
	
	return 0;
}

