// TemplateFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#define pmax(a,b) a>b?a:b
inline int PMax(int a, int b) { //nagyob prioritású mint a template
	printf("INT\n");
	return a > b ? a : b;
}

template <class T> inline T PMax(T a, T b) {
	return a > b ? a : b;
}

class A{


};

int operator>(A arg1, A arg2) {
	
	return 1;
}

int main()
{

	double x = 3.8;
	double y = 7.2;
	printf("%f\n", pmax(x++, y++)); //kétszer helyettesíti be az y++t, ezért kettőt növel rajta
	printf("%f %f\n", x, y);

	x = 3;
	y = 7;
	printf("%f\n", PMax(x++, y++));
	printf("%f %f\n", x, y);

	printf("%d\n", PMax(10, 112));
    
	printf("%s\n", PMax("alma", "körte"));

	A u, v;
	A w = PMax(u, v); //definiálni kell az operátort

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
