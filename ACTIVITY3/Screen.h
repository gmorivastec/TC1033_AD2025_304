#pragma once

class Screen {
    private:
        int screenNumber;
        int maxOccupancy;
        int currentOccupancy;
    
    public:
        Screen();
        Screen(int screenNumber, int maxOccupancy);
        bool checkAvailability();
        void occupySeat();
        void displayInfo();

};