#pragma once

#include <iostream>

//z = a + ib, zr = a + i*0
namespace complex {

	struct Complex {
		double re;
		double im;
		Complex& operator=(const Complex&) = default;
	};

	Complex operator+(const Complex&, const Complex&);
	
	Complex operator-(const Complex&, const Complex&);
	
	Complex operator*(const Complex&, const Complex&);
	
	Complex operator*(const Complex&, const double&);
	
	Complex operator/(const Complex&, const Complex&);
	
	Complex operator/(const Complex&, const double&);
	
	bool operator==(const Complex&, const Complex&);
	
	bool operator!=(const Complex&, const Complex&);

	std::ostream& operator<<(std::ostream&, const Complex&);
	
	std::istream& operator>>(std::istream&, Complex&);

	double cabs(const Complex&);
}