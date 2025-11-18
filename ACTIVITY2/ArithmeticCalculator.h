// CODE STANDARDS
// (also called idioms)

// Classes in C++ start with upper case letter (mayúscula)
// and each new word starts with upper case

#pragma once 

// this is the class' contract
// the definition of the structure
// the "what" it does

class ArithmeticCalculator {

    public:

        int maxNumber;
        int minNumber;

        // tip for naming:
        // try too make your names as explicit as possible

        // method naming - 
        // start with lower case letter
        // new word starts with uppercase
        int add(int a, int b);
        int subtract(int a, int b);

};