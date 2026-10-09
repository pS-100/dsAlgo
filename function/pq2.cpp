#include <iostream>
using namespace std;

int fact(int n)
{
    if (n < 0)
    {
        cout << "plz enter grater than 0 value";
        return -1;
    }
        int f = 1;
        for (int i = n; i > 0; i--)
        {
            f = i * f;
    
        }
        return f;
}

int main()
{   
    int n = 5;
    cout << "Factorial of " << n << " is " << fact(5);
    return 0;
}