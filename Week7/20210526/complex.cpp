#include"complex.h"
#include<iostream>

Complex::Complex() {
	//default Constructor
}

Complex::Complex(const double & r, const double & f) {
	real = r;
	fake = f;
}
Complex::~Complex() {
	std::cout << "Complex Class Destroyed" << std::endl;
}

Complex Complex::operator+(const Complex &c) const {
	Complex result(0, 0);
	result.real = this->real + c.real;
	result.fake = this->fake + c.fake;
	return result;	
}
Complex Complex::operator-(const Complex &c) const {
	Complex result;
	result.real = this->real - c.real;
	result.fake = this->fake - c.fake;
	return result;
}

Complex Complex::operator*(const Complex &c) const {
	Complex result(0, 0);
	result.real = this->real * c.real - this->fake * c.fake;
	result.fake = this->real * c.fake + this->fake * c.real;
	return result;
}

Complex operator*(double m, const Complex &c) {
	Complex result;
	result.real = c.real * m;
	result.fake = c.fake * m;
	return result;
}