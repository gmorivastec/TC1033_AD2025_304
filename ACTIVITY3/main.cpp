#include "Movie.h"
#include <iostream>

using namespace std;

int main() {

    // array 
    // - lineal data structure 
    // - a container of elements 
    // - arrays are NOT the same as lists
    // - arrays contain the information in consecutive order in memory
    // - you can access elements through an index (integer)
    // - starts at 0

    // declaring arrays
    // type nameOfArray[size];    
    // arrays can be used with classes or primitives

    // to go around the issues of the length we are doing constants
    const int PELICULAS_SIZE = 10;
    int peliculaActual = 0;

    Movie peliculas[PELICULAS_SIZE];
    int ints[10];


    // things to do on your array
    // iterate through it
    
    // this works with primitives but not with objects!
    // beware when doing object arrays
    int peliculasSize = sizeof(ints);
    // esto está aquí para que sepan que existe 
    
    for(int i = 0; i < PELICULAS_SIZE; i ++) {
        // como acceder a elementos específicos
        peliculas[i].displayInfo();
    }

    peliculas[8].displayInfo();

    // agregar peliculas y recorrer películas agregadas
    string nombrePelicula = "fight club";
    int lengthPelicula = 120;

    // como agregar película
    peliculas[peliculaActual].actualizarValores(nombrePelicula, lengthPelicula);
    peliculaActual++;

    nombrePelicula = "inception";
    lengthPelicula = 160;

    peliculas[peliculaActual].actualizarValores(nombrePelicula, lengthPelicula);
    peliculaActual++;

    for(int i = 0; i < peliculaActual; i++) {
        peliculas[i].displayInfo();
    }

    
    /*
    
    - clases
    - objetos
    - modificadores de acceso
    - constructores
    - destructores
    - loops
    - condiciones
    - funciones con retorno (bool, int, etc)
    - funciones que imprimen
    - leer strings, números
    - imprimir
    
    */
    return 0;
}