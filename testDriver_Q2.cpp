//
//  testDriver_Q2.cpp
//  40117481_20273411_A3
//
//  Created by Elizabeth Tremblay on 2025-03-11.
//

#include <stdio.h>
#include "ComplexNumber.hpp"


// Task 2.2 : test functions 
void testComplexNumber() {
    ComplexNumber c1(3, 4), c2(1, -2);
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    cout << "c1 + c2 = " << (c1 + c2) << endl;
    cout << "c1 - c2 = " << (c1 - c2) << endl;
    cout << "c1 * c2 = " << (c1 * c2) << endl;
    cout << "c1 / c2 = " << (c1 / c2) << endl;

    //cout << "++c1 = " << ++c1 << endl;
    //cout << "c1++ = " << c1++ << endl;
    //cout << "c1 after c1++ = " << c1 << endl;

    cout << "c1 rotated by 45 degrees = " << (c1 ^ (3,14 / 4)) << endl;
    cout << "~c1 (modulus) = " << ~c1 << endl;
    cout << "!c1 (conjugate) = " << !c1 << endl;

    cout << "Real part: " << c1[0] << endl;
    cout << "Imaginary part: " << c1[1] << endl;
}

// Task 2.3 

/*
int main() {
    testComplexNumber();
    
    return 0;
}
*/
