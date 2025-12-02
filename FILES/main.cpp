#include <iostream> // io - input / output stream
#include <fstream> // file stream
#include <sstream> // string stream 
#include <string>

using namespace std;

int main() {

    // how to read a file
    // (beware, it can fail. READ THE ERRORS!)
    // ifstream - input file stream
    ifstream file("products.txt");

    // check if file is open
    if(!file.is_open()) {
        cout << "FILE CAN'T BE OPENED." << endl;
        return 1;
    }

    string line;

    // read each of the lines until we run out of lines
    // each line will be saved in the "line" variable in its time
    while(getline(file, line)) {

        //cout << line << endl;
        
        // let's break up the line
        // we need variables to store the values
        // all of them will be strings to begin with
        string idStr, nameStr, priceStr, amountStr;

        // create a stream for the string
        stringstream stream(line);
        
        // we are also using getline to break the pieces
        // let's use the comma as a break point
        // "" - string
        // '' - char
        getline(stream, idStr, ',');
        getline(stream, nameStr, ',');
        getline(stream, priceStr, ',');
        getline(stream, amountStr, ',');

        cout << "LINE BREAK DOWN: " << idStr << " | " << nameStr << " | " << priceStr << " | " << amountStr << endl; 
        
        // if you need your variables in any other non-string type you can 
        // use sto_ (stoi, stof)
        float price = stof(priceStr);
        int amount = stoi(amountStr);
    }


    // if you open a file be sure to close it
    file.close();
    return 0;
}


