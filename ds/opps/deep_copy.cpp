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

    //custom copy constructor
    Car(Car &original) {
        cout << "copying original constructor" << endl;
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }

    ~Car() {
        cout << "deleting obj..\n";
        if(mileage != NULL) {
            delete mileage; //delete memory where mileage point
            mileage = NULL; //mileage to asgin NULL which is diff from any other garbeage value
        }
    }
};

int main() {
    Car c1("be6", "black");

    Car c2(c1);
    cout << c2.name <<endl;
    cout << c2.color <<endl;
    cout << *c2.mileage <<endl;

    *c2.mileage = 10;

    cout << *c1.mileage <<endl;//12, it means c1 n c2 point to diff loc

    return 0;
}