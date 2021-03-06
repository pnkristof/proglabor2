#include "pch.h"
#include <iostream>


class A {
public:
	int x;
	void printA() { std::cout << x << std::endl; }
	A() :x(9) {};
	A(int x) : x(x) {}
};

class AB : public virtual A {
public:
	void printAB() { std::cout << x << std::endl; }
	AB() : A(1) {};
};

class AC :public virtual A {
public:
	void printAC() { std::cout << x << std::endl; }
	AC() : A(2) {};
};

class BCD : virtual public AB, virtual public AC {
public:
	void printBCD() { std::cout << x << std::endl; }
	BCD() : A(3) {};
};

int main()
{
	BCD a;
	a.AB::printA();

	std::cout << sizeof(A) << std::endl;
	std::cout << sizeof(AB) << std::endl;
	std::cout << sizeof(AC) << std::endl;
	std::cout << sizeof(BCD) << std::endl;
	
}

