#pragma once
#define INTCOMPLEX_H
#include <iostream>
using namespace std;

class FloComplex {
private:
	int real;
	int imaginary;
public:
	FloComplex(int real = 0, int imaginary = 0) : real(real), imaginary(imaginary) {}
	//getter functions
	int getReal()const;
	int getImaginary()const;
	//operator overloading
	FloComplex operator+(const FloComplex& add) const;
	FloComplex operator-(const FloComplex& sub)const;
	FloComplex operator*(const FloComplex& mul)const;
	FloComplex operator/(const FloComplex& div)const;
};