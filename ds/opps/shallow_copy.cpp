#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int; //dynamic allocated
        *mileage = 12;
    }
};

int main() {
    Car c1("be6", "black");

    Car c2(c1);
    cout << c2.name <<endl;
    cout << c2.color <<endl;
    cout << *c2.mileage <<endl;

    *c2.mileage = 10;

    cout << *c1.mileage <<endl;//10 , verify that c1.mileage n c2.mileage to point same loc

    return 0;
}