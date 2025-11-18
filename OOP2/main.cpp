#include <iostream>
#include <string>
#include "Gatito.h"

int main() {

    // TESTING CONSTRUCTORS
    // DEFAULT CONSTRUCTOR
    Gatito gatito1;
    gatito1.printData();


    // let's create a new gatito with some values that we request 
    // from the user
    string nameStr, ageStr;

    cout << "give me a name for your gatito" << endl;
    getline(cin, nameStr);

    cout << "give me an age for your gatito" << endl;
    getline(cin, ageStr);

    // NEW THING
    // when we use getline anything we get is a string
    // we need to cast to something else
    float age = stof(ageStr);

    // stof (string to float)
    // stoi (string to integer)
    // stod (string to double)

    // using a non-default constructor
    Gatito gatito2(nameStr, age);
    gatito2.printData();

    return 0;

    // DESTRUCTORS ARE INVOKED WHEN OBJECTS FALL OUT OF SCOPE
}