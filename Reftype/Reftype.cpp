#include "pch.h"
#include <iostream>
#include <stdlib.h>

int scand(int &val) {
	return scanf_s("%d", &val);
}

struct book {
	char *title;
	char *author;
};

void print(book b) {
	printf("%s, %s", b.title, b.author);
}

void to_upper(book b) {
	b.title[0] = b.title[0] >= 'a' && b.title[0] <= 'z' ? b.title[0] - 'a' + 'A' : b.title[0];
	print(b);
}

int a, b;

int &get() {
	return a > 10 ? b : a;
}

int main()
{
	//int i = 7;
	//int &refI = i; //referenciatípus
	//int *ptrI = &i; //mutató
	//
	//i++;
	//(*ptrI)++;
	//refI++;

	/*scanf_s("%d", &i);
	printf("%d\n", refI);
	scanf_s("%d",&refI);
	printf("%d\n", refI);
	scanf_s("%d", ptrI);
	printf("%d\n", refI);*/

	/*scand(i);*/

	char t[100] = "a konyv cime";
	char a[100] = "a konyv szerzoje";
	book konyv = { t, a };
	to_upper(konyv);
	print(konyv);
	printf("\n");

	for (int i = 0; i < 20; i++)
	{
		get()++;
		printf("%d %d\n", a, b);
	}

	
}

