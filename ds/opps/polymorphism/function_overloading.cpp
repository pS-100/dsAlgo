#include <iostream>
#include <string>

using namespace std;

class Print
{
public:
    // fux overloading
    void show(int i)
    {
        cout << "Show fun with int value: " << i << endl;
    }

    void show(int i, int j)
    {
        cout << "Show fun with two int value: " << i << " and " << j << endl;
    }

    void show(string name)
    {
        cout << "my name is " << name << endl;
    }
};

int main()
{
    Print sh1;
    
    sh1.show(10);

    sh1.show(3, 2);
    
    sh1.show("jhon");   //based on argument they call show fun

    return 0;
}