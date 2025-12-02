#include <iostream>
#include "GroceryStore.h"

using namespace std;

int main() {

    // when using literal values 
    // we put an "f" to mark it as float explicitely
    GroceryStore oxxo(15.5f, 20.3f);

    int option = 0;

    while (option != 6) {

        cout << "CHOOSE SOMETHING" << endl;
        cin >> option;
        
        int amount = 0;

        switch(option) {
            case 1:
                cout << "HOW MUCH MILK" << endl;
                cin >> amount;

                oxxo.buyMilk(amount);
                break;
            case 2:
                cout << "HOW MUCH BREAD" << endl;
                cin >> amount;

                oxxo.buyBread(amount);
                break;
            case 3:
                cout << "MILK TOTAL: " << oxxo.calculateMilkSale() << endl;
                break;
            case 4:
                cout << "BREAD TOTAL: " << oxxo.calculateBreadSale() << endl;
                break;
            case 5:
                oxxo.displaySale();
                break;
            case 6:
                cout << "GOODBYE" << endl;
                break;
            default:
                cout << "NOT A CHOICE." << endl;
                break;
        }
    }


    return 0;
}