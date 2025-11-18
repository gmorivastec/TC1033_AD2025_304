#include "ArithmeticCalculator.h"

int ArithmeticCalculator::add(int a, int b) {

    int result = a + b;

    // when you have an instance variable such as 
    // "maxNumber" you can use it in any method that belongs
    // to the class
    if(result > maxNumber) {
        maxNumber = result;
    }

    if(result < minNumber) {
        minNumber = result;
    }

    return result;
}

int ArithmeticCalculator::subtract(int a, int b) {
    int result = a - b;

    // avoid copy-paste programming:
    // if we have something that repeats create a new method 
    // for it and invoke it
    if(result > maxNumber) {
        maxNumber = result;
    }

    if(result < minNumber) {
        minNumber = result;
    }

    return result;
}