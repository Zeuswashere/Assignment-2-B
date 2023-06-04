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
	int	i1 = (real * mul.imaginary) + (imaginary * mul.real);// basically (r1*i2) + (i1*r1)
	return IntComplex(r1, i1);
}
IntComplex IntComplex::operator/(const IntComplex& div)const {
	int denominator = (div.real * div.real) + (div.imaginary * div.imaginary); //r2 square + i2 square 
	int r1 = ((real * div.real) + (imaginary * div.imaginary)) / denominator;  //r1 square + i1 square /denominator
	int i1 = ((imaginary * div.real) - (real * div.imaginary)) / denominator;  //((i1*r2)-(r1*i2)) /denominator
	return IntComplex(r1, i1);
}
int IntComplex::getReal()const {
	return real;
}
int IntComplex::getImaginary()const {
	return imaginary;
}
