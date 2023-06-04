// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Complex.h"
#include "Complex_f.h"
using namespace std;
int main() {
	IntComplex a1 = (1,3);
	IntComplex a2 = (2, 4);
	IntComplex ans = a1 + a2;
	cout << ans;
	return 0;
}