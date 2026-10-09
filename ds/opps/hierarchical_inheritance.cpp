#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    void eat() {
        cout << "they can eat..\n";
    }

    void breathe() {
        cout << "they can breathe..\n";
    }
};

class Bird : public Animal{
public:
    void fly() {
        cout << "they can fly..\n";
    }
};

class Fish : public Animal{
public:
    void swim() {
        cout << "they can swim..\n";
    }
};

class Mammal : public Animal{
public:
    void walk() {
        cout << "they can walk..\n";
    }
};

int main() {
    Fish f1;
    f1.breathe();
    f1.swim();

    Mammal m1;
    m1.eat();
    m1.walk();

    Bird b1;
    b1.breathe();
    b1.fly();

    return 0;
}