
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

