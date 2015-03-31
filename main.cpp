/* 
 * File:   main.cpp
 * Author: John
 *
 * Created on March 30, 2015, 4:50 PM
 */

#include <cstdlib>

#include "ComplexNumbers.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ComplexNumbers *num1 = new ComplexNumbers(2,3);
    ComplexNumbers *num2 = new ComplexNumbers(3,4);
    ComplexNumbers num3 = num1 + num2;
    cout << num3 << "\n";
    return 0;
}

