#pragma once
#define FLOCOMPLEX_h
#include <iostream>
#include "Complex.h"
using namespace std;

class FloComplex : public IntComplex{ //inherits IntComplex
private:
	float real;
	float imaginary;
public:
	FloComplex(float real = 0.0f, int imaginary = 0.0f);
	//getter functions
	float getReal()const;
	float getImaginary()const;
	//operator overloading
	FloComplex operator+(const FloComplex& add) const;
	FloComplex operator-(const FloComplex& sub)const;
	FloComplex operator*(const FloComplex& mul)const;
	FloComplex operator/(const FloComplex& div)const;
