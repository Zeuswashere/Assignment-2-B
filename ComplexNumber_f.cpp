// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Complex_f.h"
using namespace std;
FloComplex::FloComplex(int real, int imaginary) : real(real), imaginary(imaginary) {}
FloComplex FloComplex::operator+(const FloComplex& add)const {
	int r1 = real + add.real;
	int i1 = imaginary + add.imaginary;
	return FloComplex(r1, i1);
}
FloComplex FloComplex::operator-(const FloComplex& sub)const {
	int r1 = real - sub.real;
	int i1 = imaginary - sub.imaginary;
	return FloComplex(r1, i1);
}
FloComplex FloComplex::operator*(const FloComplex& mul)const {
	int r1 = (real * mul.real) - (imaginary * mul.imaginary);//product of real minus product of imaginary
	int	i1 = (real * mul.imaginary) + (imaginary * mul.real);// basically (r1*i2) + (i1*r1)
	return FloComplex(r1, i1);
}
FloComplex FloComplex::operator/(const FloComplex& div)const {
	int denominator = (div.real * div.real) + (div.imaginary * div.imaginary); //r2 square + i2 square 
	int r1 = ((real * div.real) + (imaginary * div.imaginary)) / denominator;  //r1 square + i1 square /denominator
	int i1 = ((imaginary * div.real) - (real * div.imaginary)) / denominator;  //((i1*r2)-(r1*i2)) /denominator
	return FloComplex(r1, i1);
}
int FloComplex::getReal()const {
	return real;
}
int FloComplex::getImaginary()const {
	return imaginary;
}
