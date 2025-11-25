#pragma once

// preprocessor directives
#ifndef MOVIE_H
#define MOVIE_H

#include <string>

using namespace std;

class Movie {
    private:
        string name;
        int length;
    public:
        Movie();
        Movie(string& name, int length);
        void displayInfo();

        // util para su proyecto
        // método que actualice los datos del objeto
        void actualizarValores(string& name, int length);
};

#endif