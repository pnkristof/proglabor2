#include "pch.h"
#include <iostream>
#include <stdio.h>

inline int max(int a, int b) { return a > b ? a : b; }
inline int min(int a, int b) { return a > b ? b : a; }

class Rectangle {
public:
	int Left;
	int Top;
	int Right;
	int Bottom;

	int Area() const { //a const kulcsszó azt jelenti, hogy az alaptagok nem változnak
		return (Right - Left)* (Bottom - Top);
	};
};

int Area(const Rectangle &r) {
	return (r.Right - r.Left) * /*abs*/(r.Top - r.Bottom);
}

//oltári baromság ezt csinálni:
Rectangle Set(int l, int r, int t, int b) {
	Rectangle rect;
	rect.Top = max(t, b);
	rect.Bottom = min(t, b);
	rect.Right = max(l, r);
	rect.Left = min(l, r);

	return rect;
}

int main()
{

	Rectangle r;
	r.Bottom = 10;
	r.Top = 5;
	r.Left = 10;
	r.Right = 20;

	printf_s("%d\n", Area(Set(r.Left, r.Right, r.Top, r.Bottom)));

}
