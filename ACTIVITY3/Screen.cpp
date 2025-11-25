#include "Screen.h"
#include <iostream>

using namespace std;

Screen::Screen(){
    screenNumber = 0;
    maxOccupancy = 2;
    currentOccupancy = 0;
}

Screen::Screen(int screenNumber, int maxOccupancy){
    this->screenNumber = screenNumber;
    this->maxOccupancy = maxOccupancy;
    this->currentOccupancy = 0;
}

bool Screen::checkAvailability(){
    
    //return currentOccupancy < maxOccupancy;

    if(currentOccupancy < maxOccupancy)
    {
        return true; // when you return something the 
        // function ends
    }

    return false;
}

void Screen::occupySeat(){
    currentOccupancy++;
}

void Screen::displayInfo(){
    cout << screenNumber << ", " <<  maxOccupancy << ", " << currentOccupancy << endl;
}