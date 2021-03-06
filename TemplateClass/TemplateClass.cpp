// TemplateClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


struct A { A(double def = 0.0) {} };;

template <class T, int N> class Array {

	T data[N];
public:
	Array(T def = 0.0);
	T operator [] (int i);
	template <int M> Array<T, N> &operator =(Array<T, M> &r);
};

template <class T, int N> Array<T, N>::Array(T def) {
	for (int i = 0; i < N; i++) {
		data[i] = def;
	}
}

template <class T, int N>  T Array<T, N>::operator [] (int i) {
	return (i >= 0 && i <= 5) ? data[i] : 0.0;
}
template <class T, int N> template<int M> Array<T, N> &Array<T, N>::operator = (Array<T, M> &r) {
	for (int i = 0; i < (N < M ? N : M); i++)
	{
		data[i] = r[i];
	}
	return *this;
}




int main()
{
	Array<double, 3> a(6.4);
	Array<double, 9> b(3.2);
	for (int i = 0; i < 10; i++) {
		std::cout << a[i] << std::endl;
	}

	a = b;

	for (int i = 0; i < 10; i++) {
		std::cout << a[i] << std::endl;
	}
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
