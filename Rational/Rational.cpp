#include "pch.h"
#include <iostream>

int gcd(int a, int b) {
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

class CRational {
	

public:
	CRational(int i = 0) :p(i), q(1) {};
	CRational(int p, int q) : p(p / gcd(p, q)), q(q / gcd(p, q)) {};
	void Print();
	int p; //szamalo
	int q; //nevezo

};

void CRational::Print() {
	printf("%d/%d\n", p, q);
}

CRational add(CRational a, CRational b) {
	CRational e = (a.q*b.p + a.p*b.q, a.q*b.q);
	return e;
}

int main()
{
	CRational a;
	CRational b = 7;
	CRational c = { 10, 15 };
	CRational d = { 20, 15 };
	a.Print();
	b.Print();
	c.Print();
	add(d,c).Print();
}
