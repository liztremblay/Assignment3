//
//  ComplexNumber.cpp
//  40117481_20273411_A3
//
//  Created by Elizabeth Tremblay on 2025-03-11.
//
//

#include "ComplexNumber.hpp"


ComplexNumber::ComplexNumber(double r, double i) : real(r), imag(i) {}

// Task 2.1

// (a + bi) + (c + di) = (a + c) + (b + d)i
ComplexNumber ComplexNumber::operator + (const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imag + other.imag);
}

// (a + bi) - (c + di) = (a - c) + (b - d)i
ComplexNumber ComplexNumber::operator - (const ComplexNumber& other) const {
    return ComplexNumber(real - other.real, imag - other.imag);
}

// (a + bi)(c + di) = ac + adi + bci + bdi^2 = (ac - bd) + (ad + bc)i
ComplexNumber ComplexNumber::operator * (const ComplexNumber& other) const {
    return ComplexNumber((real * other.real) - (imag * other.imag), (real * other.imag) + (imag * other.real));
}

// (a + bi) / (c + di) = [(a + bi)(c - di)] / (c^2 + d^2) = [(ac + bd) + (bc - ad)i] / (c^2 + d^2)
ComplexNumber ComplexNumber::operator / (const ComplexNumber& other) const {
    double denominator = other.real * other.real + other.imag * other.imag;
    if (denominator == 0) {
        cerr << "Division by zero" << endl;
        return ComplexNumber();
    }
    return ComplexNumber((real * other.real + imag * other.imag) / denominator, (imag * other.real - real * other.imag) / denominator);
}


bool ComplexNumber::operator == (const ComplexNumber& other) const {
    return real == other.real && imag == other.imag;
}

bool ComplexNumber::operator != (const ComplexNumber& other) const {
    return real != other.real && imag != other.imag;
}

ComplexNumber& ComplexNumber::operator++() { // ++Prefix
    ++real;
    ++imag;
    return *this;
}

ComplexNumber ComplexNumber::operator++(int) { // Postfix++
    ComplexNumber temp = *this;
    //real++;
    //imag++;
    ++(*this);
    return temp;
}

ComplexNumber& ComplexNumber::operator--() { // --Prefix
    --real;
    --imag;
    return *this;
}

ComplexNumber ComplexNumber::operator--(int) { // Postfix--
    ComplexNumber temp = *this;
    real--;
    imag--;
    return temp;
}


ComplexNumber ComplexNumber::operator ^ (double angle) const {
    double magnitude = sqrt(real * real + imag * imag);
    double newReal = magnitude * cos(angle);
    double newImag = magnitude * sin(angle);
    return ComplexNumber(newReal, newImag);
}

double ComplexNumber::operator~() const {
    return sqrt(real * real + imag * imag);
}

ComplexNumber ComplexNumber::operator!() const {
    return ComplexNumber(real, -imag);
}

double ComplexNumber::operator[](int index) {
    if (index == 0) {
        return real;
    }
    else if (index == 1) {
        return imag;
    }
    else {
        cerr << "Index out of range" << endl;
        return 0;
    }
}

ostream& operator<<(ostream& os, const ComplexNumber& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
}

istream& operator>>(istream& is, ComplexNumber& c) {
    is >> c.real >> c.imag;
    return is;
}

