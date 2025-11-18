#include "UnitCalculator.h"

float UnitCalculator::transformMilesToKilometers(float miles){
    float result = miles * kilometersInAMile;
    return result;
}

float UnitCalculator::transformKilometersToMiles(float kilometers) {
    // what is the resulting type of an operation?
    // the biggest type involved
    // - char
    // - int
    // - float
    // - double
    // - long double
    return kilometers / kilometersInAMile;
}