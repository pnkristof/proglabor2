
#include "pch.h"
#include <iostream>

#define MAX(a,b) ((a) > (b) ? (a) : (b))

struct book {
	char *title;
	char *author;
};



void printbook(struct book konyv) {
	printf("Title: %s, Author: %s", konyv.title, konyv.author);
}

int main()
{
    std::cout << "Hello World!\n"; 

	printf("ad");

	int elso = 10;
	int masodik = 12;

	printf("%d", MAX(elso, masodik));

	


	



}

