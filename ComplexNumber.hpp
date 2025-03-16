//
//  ComplexNumber.hpp
//  40117481_20273411_A3
//
//  Created by Elizabeth Tremblay on 2025-03-11.
//

#ifndef ComplexNumber_hpp
#define ComplexNumber_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;


class ComplexNumber {

private:
	double real, imag;

public:

	ComplexNumber(double r = 0, double i = 0);

	friend ostream& operator<<(ostream& os, const ComplexNumber& c);
	friend istream& operator>>(istream& is, ComplexNumber& c);

	ComplexNumber operator + (const ComplexNumber& other) const;
	ComplexNumber operator - (const ComplexNumber& other) const;
	ComplexNumber operator * (const ComplexNumber& other) const;
	ComplexNumber operator / (const ComplexNumber& other) const;

	bool operator == (const ComplexNumber& other) const;
	bool operator != (const ComplexNumber& other) const;

	ComplexNumber operator ^ (double angle) const;

	ComplexNumber operator++(int); // Postfix
	ComplexNumber& operator++(); // Prefix

	ComplexNumber operator--(int); // Postfix
	ComplexNumber& operator--(); // Prefix

	double operator[](int index);

	double operator~() const; // Returns sqrt(a^2 + b^2)
	ComplexNumber operator!() const; // Returns a - bi

};

#endif /* ComplexNumber_hpp */
