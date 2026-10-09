#include <iostream>
#include <string>

using namespace std;

class Car {
    string name;
    string color;

public: 
    //constructor / non-parameterized constructor
    Car() {
        cout << "Constructor is called, as object begin..\n";
    }

    //parameterized constructor
    //& constructor overloading
    Car(string name, string color) {
        this->name = name;              //this point to c2 obj
        this->color = color;
    }

    //getter -> to check value assign
    string getCarName() {
        return name;
    }

    string getCarColor() {
        return color;
    }
};

int main() {
    Car c1;
    Car c2("bmw", "black");

    cout << c2.getCarName() << " " << c2.getCarColor() ;
    return 0;
}