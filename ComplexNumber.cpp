// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Complex.h"
using namespace std;
IntComplex::IntComplex(int real,int imaginary) : real(real),imaginary(imaginary){}
IntComplex IntComplex::operator+(const IntComplex& add)const {
	int r1 = real + add.real;
	int i1 = imaginary + add.imaginary;
	return IntComplex(r1, i1);
}
