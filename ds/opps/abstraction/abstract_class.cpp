#include<iostream>
#include<string>
using namespace std;

class Shape{
    public:
    virtual void draw() = 0;
};

class Child : public Shape{
    public:
    void draw() {
        cout << "draw square";
    }
};

int main() {
    Child c1;
    c1.draw();

    return 0;
}

//if child class not implemented than it also become abstract class 
//so if child class have no vir fun than how? b/c it inherite parent class which have pur vir fun

//the abstract class itself does not hide information automatically. What it does is define an interface (what operations are available) without exposing their implementation.

// The information hiding comes from:

// exposing only the public interface (like start()), and
// keeping the implementation details inside the derived class (often using private or protected members).

//Abstraction = Show what can be done.
// Implementation = Hide how it is done.
// Abstract class = A language feature that helps you enforce this design by requiring derived classes to implement the "how."