#include <iostream>
#include "Gatito.h"

Gatito::Gatito() {
    // what's a constructor for?
    // setup!

    // you can initialize variables
    // start some processes if you need to
    name = "Default";
    age = 0;
    cout << "DEFAULT CONSTRUCTOR" << endl;
}

Gatito::Gatito(string& name, float age) {

    // what the hell with the & ?!?!?!
    // 2 WAYS TO PASS PARAMETERS
    // - copy 
    // - reference

    // let's talk about the "this" pointer!
    this->name = name;
    this->age = age;
    cout << "NON-DEFAULT CONSTRUCTOR" << endl;

}

Gatito::~Gatito() {
    cout << "SE MURIO." << endl;
}

void Gatito::printData() {

    cout << name << ", " << age << endl;
}