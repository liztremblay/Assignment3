//
//  ComplexNumber.cpp
//  40117481_20273411_A3
//
//  Created by Elizabeth Tremblay on 2025-03-11.
//
//

#include "ComplexNumber.hpp"


ComplexNumber::ComplexNumber(double r, double i) : real(r), imag(i) {}

// (a + bi) + (c + di) = (a + c) + (b + d)i
ComplexNumber ComplexNumber::operator + (const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imag + other.imag);
}

// (a + bi) - (c + di) = (a - c) + (b - d)i
ComplexNumber ComplexNumber::operator - (const ComplexNumber& other) const {
    return ComplexNumber(real - other.real, imag - other.imag);
}

// (a + bi)(c + di) = ac + adi + bci + bdi^2 = (ac - bd) + (ad + bc)i
ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {
    return ComplexNumber((real * other.real) - (imag * other.imag), (real * other.imag) + (imag * other.real))
}

// (a + bi) / (c + di) = [(a + bi)(c - di)] / (c^2 + d^2) = [(ac + bd) + (bc - ad)i] / (c^2 + d^2)
