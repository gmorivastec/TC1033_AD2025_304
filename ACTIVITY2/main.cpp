#include <iostream>
#include "ArithmeticCalculator.h"
#include "UnitCalculator.h"

using namespace std;

int main() {

    // declare an object
    ArithmeticCalculator arithmeticCalculator, ac;

    // start values in 0
    // variables name CAN be repeated in different scopes
    int maxNumber = 15;
    arithmeticCalculator.maxNumber = 0;
    arithmeticCalculator.minNumber = 0;
    ac.maxNumber = 15;

    // coding standard - object names start with lower case
    // remember: C++ is case sensitive
    UnitCalculator unitCalculator;

    // note about constant floats:
    // we're going to add an f after the value
    unitCalculator.kilometersInAMile = 1.6f;

    int n1, n2;
    cout << "GIVE ME A NUMBER" << endl;
    cin >> n1;

    cout << "GIVE ME ANOTHER NUMBER" << endl;
    cin >> n2;

    int result = arithmeticCalculator.add(n1, n2);
    cout << "addition: " << result << endl;

    result = arithmeticCalculator.subtract(n1, n2);
    cout << "subtraction: " << result << endl;

    cout << arithmeticCalculator.minNumber << ", " << arithmeticCalculator.maxNumber << endl;

    // i can use a smaller typed value as a paramater that needs a bigger one
    float result2 = unitCalculator.transformKilometersToMiles(n1);

    cout << "km in a mile: " << result2 << endl;

    result2 = unitCalculator.transformMilesToKilometers(n1);

    cout << "miles in a km: " << result2 << endl;

    return 0;
}