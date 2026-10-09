#include <iostream>
#include <string>

using namespace std;

class Complex
{
    int real;
    int img;

public:
    Complex(int r, int i) {
        real = r;
        img = i;
    }
    void show()
    {
        cout << "complex number: " << real << " - " << img << "i" << endl;
    }

    // operator overloading
    // void operator-(Complex &c2)
    Complex operator-(Complex &c2)          //return complex obj n here Complex use as return type
    {
        Complex c3(this->real - c2.real, this->img - c2.img);
        return c3;
    }
};

int main()
{
    Complex c1(2, 4);
    c1.show();

    Complex c2(4, 2);
    c2.show();

    Complex c3 = c1 - c2;
    c3.show();


    return 0;
}