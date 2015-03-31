/* 
 * File:   ComplexNumbers.cpp
 * Author: John
 * 
 * Created on March 30, 2015, 4:50 PM
 */

#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include "ComplexNumbers.h"

ComplexNumbers::ComplexNumbers() {
    a = 0;
    b = 0;
}

ComplexNumbers::ComplexNumbers(double a, double b) {
    this->a = a;
    this->b = b;
}

ComplexNumbers::ComplexNumbers(const ComplexNumbers& orig) {
    a = orig.a;
    b = orig.b;
}

ComplexNumbers::~ComplexNumbers() { // not necessary
}

double ComplexNumbers::getReal() {
    return a;
}

double ComplexNumbers::getImaginary() {
    return b;
}

ComplexNumbers ComplexNumbers::operator+(const ComplexNumbers& other) {
    ComplexNumbers result;

    result.a = a + other.a;
    result.b = b + other.b;
    return result;
}

ComplexNumbers ComplexNumbers::operator-(const ComplexNumbers& other) {
    ComplexNumbers result;
    
    result.a = a - other.a;
    result.b = b - other.b;
    return result;
}

ComplexNumbers ComplexNumbers::operator*(const ComplexNumbers& other) {
    ComplexNumbers result;
    
    result.a = a * other.a;
    result.b = b * other.b;
    return result;
}

ComplexNumbers ComplexNumbers::operator/(const ComplexNumbers& other) {
    ComplexNumbers result;
    
    result.a = a / other.a;
    result.b = b / other.b;
    return result;
}

std::ostream &operator<<(std::ostream &output, const ComplexNumbers &op) {
    std::cout << op.a << " + " << op.b << "i";
}