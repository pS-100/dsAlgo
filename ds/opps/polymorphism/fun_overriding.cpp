#include <iostream>

using namespace std;

class Parent{
    public:
        virtual void show() {
            cout << "Parent Class\n";
        }
};

class Child : public Parent{
    public:
        void show() override {
            cout << "Child Class";
        }
};

int main() {
    Child c1;
    Parent *p;

    p = &c1;

    p->show();

    return 0;
}

//function overriding -> (same function name and same parameters in the derived class)
//every child class provide its own behavior
//ptr of parent class, but actual obj of child, so child class fun called
//i.e, runtime polymorphism
//override -> safety check for programmers, if child class fun have diff perameter than,by using keyword give error,
// without this it called to parent class fun