// 2 files 
// .h - header file 
// encabezado
// contains only the definition of the class (the "what")

// OOP 
// Object Oriented Programming - Programming paradigm

// Based on Classes 
// Classes are the abstraction of an entity 

// Classes have two main parts:
// - attributes
// - behavior

#pragma once // preprocessor directive (an instructor for the compiler)
#include <string>

// std - namespace
// namespaces are a collection of elements - classes, functions, variables, etc

using namespace std;

class Perrito {

    // access modifiers
    public: 
        
        // attributes
        string nombre;
        string raza;
        int edad;
        int numeroDePatas;

        // behaviors
        // represented through methods
        // we declare JUST the signatures here
        void ladrar();
        void comer();
        int add(int a, int b);
        
};