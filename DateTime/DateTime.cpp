// DateTime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


class Time {
	int hour;
	int minute;

public:
	const int &Hour;
	const int &Minute;

	Time(int h, int m) :Hour(hour), Minute(m) {
		hour = h + m / 60;
		minute = m % 60;
	}

	virtual void Print() {
		printf("%d:%d", hour, minute);
	}
};


class Date {
	int year;
	int month;
	int day;
public:
	const int &Year;
	const int &Month;
	const int &Day;

	Date(int y, int m, int d) : Year(y), Month(m), Day(d){
		year = y;
		month = m;
		day = d;
	}

	virtual void Print() {
		printf("%d. %d. %d.", year, month, day);
	}

};

class DateTime : Date, public Time{
public:
	DateTime(int y, int m, int d, int h, int min) : Date(y,m,d), Time(h,min){

	}

	void Print() {
		Date::Print();
		printf(" - ");
		Time::Print();
	}
};

int main()
{
	Time t(11, 56);
	Date d(2018, 11, 12);
	d.Print();
	printf(" - ");
	t.Print();
	printf("\n");

	DateTime dt(2017, 10, 11, 10, 55);
	dt.Print();

	Time &tt = dt;
	tt.Print();
	
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
