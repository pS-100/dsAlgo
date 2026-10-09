// static var in class
#include <iostream>

using namespace std;

class Example
{
public:
    static int n;
};

// Definition of static variable
// outside the class → Definition + memory allocation.
// Access it preferably with Example::n because it belongs to the class, not individual objects.
int Example::n = 0;

int main()
{
    Example eg1;
    Example eg2;
    Example eg3;

    cout << eg1.n++ << endl;
    cout << eg2.n++ << endl;
    cout << eg3.n++ << endl;

    return 0;
}