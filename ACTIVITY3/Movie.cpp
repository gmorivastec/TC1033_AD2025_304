#include "Movie.h"
#include <iostream>

Movie::Movie() {
    name = "Default Movie";
    length = 180;
    cout << "DEFAULT CONSTRUCTOR" << endl;
}

Movie::Movie(string& name, int length) {
    this->name = name;
    this->length = length;

}

void Movie::displayInfo() {
    cout << name << ", " << length << endl;
}

void Movie::actualizarValores(string& name, int length) {

    this->name = name;
    this->length = length;
}