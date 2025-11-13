// include / import 
// we are adding a reference to previously made code 
// most likely a library
#include <iostream>
#include <string>


// this is a comment - not code but a note for any developer 

/*
this right here is 
a multine 
comment.
*/

// in C++ we have a main entry point
// which is what's going to run when run our code

// defining and invoking functions / methods
// function definition
// stating / declaring a function exists and what it does
// syntaxis:
// returnType name() {}
void example() {
    std::cout << "JUST AN EXAMPLE!" << std::endl;
    // return;
}

int rectangleArea(int base, int height) {
    int result = base * height;
    return result;
}

// function / method syntaxis - type name(parameters) {}
int main() {

    // 1st thing 
    // 2 types of programming languages
    // 1. interpreted (scripting) - needs an interpreter
    // 2. compiled (such as c++)
    // - before we run we need to compile (through a compiler)
    // - compile is the translation of source code into bytecode

    std::cout << "HELLO WORLD" << " something else. " << std::endl;

    // compile through terminal
    // depending on your OS / compiler the command will change
    // YOU DON'T HAVE DO IT, I'M JUST SHOWING YOU HOW IT'S DONE
    // compiling in linux / macos / windows with mingw - g++ main.cpp -o test
    // running in macos / linux / windows powershell - ./test

    // review of the python things
    // variables
    // strictly typed

    // first step is variable definition 
    // syntaxis - type variableName;
    // camelCase
    // types define what kind of data can be saved into a variable
    int integerVar; // whole numbers
    float floatVar; // numbers with decimal values
    double doubleVar; // numbers with decimal values (double the size than float)
    char charVar; // character
    long longVar; // big number
    std::string stringVar; // a string (Text)
    bool booleanVar;

    booleanVar = true;

    std::cout << integerVar << std::endl;
    // std
    // namespace - group of elements (classes, methods, etc)
    // assignation 
    integerVar = 5;
    int anotherInteger = 10;


    // flow control structures 
    // conditions
    if(integerVar < 10) {
        // do something
    } else if (integerVar < 8) {
        // do something else
    } else {
        // some other thing
    }

    // switch
    switch(integerVar) {
        case 0:
            // do something
            break;
        case 1:
            // do soemthing else
            break;
        default:
            // what happens if nothing else
            break;
    }

    // loops 

    // for (startingValue; condition; incrementOrChange)
    // ++ ?
    // i++ equals to i = i + 1
    // ++i
    // i += 1
    // i--
    // i -= 2

    for(int i = 0; i < 10; i++) {
        // brackets define
        std::cout << i << std::endl;
    }
    
    for(int i = 10; i > 0; i--) {
        std::cout << i << std::endl;
    }

    int i = 0;
    while(i < 10) {
        std::cout << i << std::endl;
        
        // in ANY while loop
        // ensure that the condition can be unmet
        i++;
    }

    i = 0;
    do {
        std::cout << i << std::endl;
        
        // in ANY while loop
        // ensure that the condition can be unmet
        i++;
    } while(i < 10);

    example();
    int rectangleExample = rectangleArea(integerVar, 2);
    std::cout << "RECTANGLE AREA: " << rectangleExample << std::endl;
}