#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string name;
    string color;

    Car(string name, string color) {
        this->name = name;
        this->color = color;
    }

    //custom copy constructor
    Car(Car &original) {                        //original is just name we take any thing but must use with& n below also
        cout << "copying original constructor" << endl;
        name = original.name;
        color = original.color;
    }
};

int main() {
    Car c1("be6", "black");

    //automatic created by compiler, c2 obj copy properties of c1 obj, by using copy constructor
    //below use for both ato n custom const, to access value
    Car c2(c1);
    cout << c2.name <<endl;
    cout << c2.color <<endl;

    return 0;
}