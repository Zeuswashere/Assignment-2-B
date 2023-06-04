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
IntComplex IntComplex::operator-(const IntComplex& sub)const {
	int r1 = real - sub.real;
	int i1 = imaginary - sub.imaginary;
	return IntComplex(r1, i1);
}
IntComplex IntComplex::operator*(const IntComplex& mul)const {
	int r1 = (real * mul.real) - (imaginary * mul.imaginary);//product of real minus product of imaginary
		i1 = (real * mul.imaginary) + (imaginary * mul.real);// basically (r1*i2) + (i1*r1)
		return IntComplex(r1, i1);
}	
