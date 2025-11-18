#pragma once
#include <string>

using namespace std;

class Gatito {

    // access modifiers
    // private - only the instance has access to those members
    // public - anyone has access to those members
    // (more later in your life!)
    private:
        // we normally make attributes private
        // encapsulation
        string name;
        float age;

    public:

        // constructors
        // methods that are invoked automatically when creating an object


        // default constructor
        // a constructor that has no parameters
        // we have an empty default constructor by default

        // CONSTRUCTORS MUST BE CALLED EXACTLY THE SAME AS THE CLASS
        // THEY HAVE NO RETURN TYPE
        Gatito();

        // PENDING - that & thing (ampersand)
        Gatito(string& name, float age);

        // DESTRUCTOR
        // method that is invoked when the object is destroyed
        ~Gatito();

        void printData();
};