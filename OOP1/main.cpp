// we need our main entry point SOMEWHERE
// (the thing that actually run, the main function)

#include <iostream>
#include <string>
#include "Perrito.h"

int main() {
    
    // print text into console
    std::cout << "TEST" << std::endl;

    // how to read from terminal
    // depends on what you are reading 
    // (strings or anything else)
    int someNumber;
    std::string someString;

    std::cout << "give me a string" << std::endl;
    getline(std::cin, someString);

    std::cout << "give me a number" << std::endl;
    std::cin >> someNumber;    

    std::cout << someNumber << "," << someString << std::endl;

    // classes are the abstract definition
    // the counterpart is called an object
    // a specific instance of a class
    Perrito solovino;
    Perrito firulais;
    Perrito elMilaneso;


    // each object has its own copy of the attributes
    // and behaviors in the class
    solovino.nombre = "Solovino";
    firulais.nombre = "Firulais";
    elMilaneso.nombre = "El Milaneso";

    solovino.numeroDePatas = 4;
    firulais.numeroDePatas = 3;
    elMilaneso.numeroDePatas = 2;

    solovino.ladrar();
    firulais.ladrar();
    elMilaneso.ladrar();

    solovino.comer();
    firulais.comer();
    elMilaneso.comer();

    int suma = elMilaneso.add(3, 2);
    std::cout << suma << std::endl;
    return 0;
}