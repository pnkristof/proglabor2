// NegyedikLabor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	std::cout << "Hello World!\n";


	int *i = (int *)malloc(sizeof(int));
	*i = 12;


	int *j = new int(13);
	int *arrJ = new int[20];

	printf_s("%d\n%d\n", *i, *j);

	free(i); //felszabadítás
	delete j; //felszabadítás
	delete[]arrJ; //szögletes zárójel nélkül csak az első elemet szabadítja fel
	j = 0; //nullmutató


}

