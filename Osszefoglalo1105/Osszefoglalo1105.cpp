#include "pch.h"
#include <iostream>
#include <stdio.h>

class Sample {

	int x;
	int a;
	int c;

public:
	Sample() : x(0), a(0), c(0) {
		printf("Default constructor x:%d, a:%d, c:%d \n", x, a, c);
	}

	Sample(int t) : x(t), a(0), c(0) {
		printf("Conversion constructor x:%d, a:%d, c:%d \n", Sample::x, a, c);
	}

	Sample(const Sample &copy) : x(copy.x), a(copy.a), c(copy.c + 1) {
		printf("Copy constructor x:%d, a:%d, c:%d \n", x, a, c);
	}

	Sample & operator = (const Sample &assign) {
		x = assign.x;
		a = assign.a + 1;
		c = assign.c + 1;
		printf("Assignment x:%d, a:%d, c:%d \n", x, a, c);
		return *this;
	}

	~Sample() {
		printf("Default destructor \n");
	}

	friend Sample foo(Sample value);
};

Sample foo(Sample value) {
	value.x = -value.x;
	return value;
}

int main()
{
	Sample defa();
	Sample conversion (5);
	Sample copy(conversion);
	Sample b = { 5 };
	Sample x = 5;

	conversion = 8;

	foo(copy);

	return 0;
}
