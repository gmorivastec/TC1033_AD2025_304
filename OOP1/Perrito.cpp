// .cpp
// contains the implementation of the class
#include <iostream>
#include "Perrito.h"

// in c++ include actually embeddes the file being included

// let's talk about implementation

void Perrito::ladrar() {
    // all methods have access to the class' attributes
    std::cout << "WOOF." << nombre << std::endl;
}

void Perrito::comer() {
    std::cout << "NOM NOM NOM NOM" << numeroDePatas << std::endl;
}

// SUPER IMPORTANT
// whenever possible use parameters
int Perrito::add(int a, int b) {

    int result = a + b;
    // remember:
    // printing is NOT returning
    return result;
}