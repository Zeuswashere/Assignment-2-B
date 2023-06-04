#pragma once
#define INTCOMPLEX_H
#include <iostream>
using namespace std;

class IntComplex {
private:
	int real;
	int imaginary;
public:
	IntComplex(int real = 0, int imaginary = 0) : real(real), imaginary(imaginary) {}
	//getter functions
	int getReal()const;
	int getImaginary()const;
	//operator overloading
	IntComplex operator+(const IntComplex& add) const;
	IntComplex operator-(const IntComplex& sub)const;
	IntComplex operator*(const IntComplex& mul)const;
	IntComplex operator/(const IntComplex& div)const;
};