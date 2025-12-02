#include <iostream>
#include "GroceryStore.h"

using namespace std;

GroceryStore::GroceryStore(float milkPrice, float breadPrice) {
    this->milkPrice = milkPrice;
    this->breadPrice = breadPrice;
    milkAmount = 0;
    breadAmount = 0;
}

void GroceryStore::buyMilk(int amount) {
    milkAmount = milkAmount + amount;
    //milkAmount += amount;
}

void GroceryStore::buyBread(int amount) {
    breadAmount = breadAmount + amount;
}

float GroceryStore::calculateMilkSale() {
    return milkAmount * milkPrice;
}

float GroceryStore::calculateBreadSale() {
    return breadPrice * breadAmount;
}

float GroceryStore::calculateTotalSale() {
    return calculateMilkSale() + calculateBreadSale();
}

void GroceryStore::displaySale() {

    cout << "Milk: " << milkAmount << " " << calculateMilkSale() << endl;
    cout << "Bread: " << breadAmount << " " << calculateBreadSale() << endl;
    cout << "Total: " << calculateTotalSale() << endl;
}