/* 
 * File:   ComplexNumbers.h
 * Author: John
 *
 * Created on March 30, 2015, 4:50 PM
 */

#ifndef COMPLEXNUMBERS_H
#define	COMPLEXNUMBERS_H
#include <ostream>

class ComplexNumbers {
public:
    ComplexNumbers();
    ComplexNumbers(double a, double b);
    ComplexNumbers(const ComplexNumbers& orig);
    virtual ~ComplexNumbers(); // not necessary
    double getReal(); // returns real component
    double getImaginary(); // returns imaginary component
    
    // "operator overloading"
    ComplexNumbers operator+(const ComplexNumbers &other); // returns ComplexNumbers
    ComplexNumbers operator-(const ComplexNumbers &other); // returns ComplexNumbers
    ComplexNumbers operator*(const ComplexNumbers &other); // returns ComplexNumbers
    ComplexNumbers operator/(const ComplexNumbers &other); // returns ComplexNumbers
    
    ComplexNumbers conjugate();
    
    friend std::ostream &operator<<(std::ostream &output, const ComplexNumbers &op);
    
    
private:
    double a; // real component
    double b; // imaginary component
};

#endif	/* COMPLEXNUMBERS_H */

