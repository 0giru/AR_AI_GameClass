#pragma once
#ifndef _COMPLEX_H_
#define _COMPLEX_H_
class Complex {
private:
	double real;
	double fake;

public:
	Complex();
	Complex(const double & r, const double & f);
	~Complex();

	Complex operator+(const Complex &c) const;
	Complex operator-(const Complex &c) const;
	Complex operator*(const Complex &c) const;

	friend Complex operator*(double m, const Complex &c);
};
#endif