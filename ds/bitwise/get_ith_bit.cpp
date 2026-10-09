#include <iostream>
using namespace std;

int getIthBit(int num, int i)
{
    int bitMask = 1 << i;

    if (!(num & bitMask))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int setIthBit(int num, int i)
{
    int bitMask = 1 << i;

    return (num | bitMask);
}

int clearIthBit(int num, int i)
{
    int bitMask = ~(1 << i);

    return (num & bitMask);
}

int main()
{
    cout << getIthBit(6, 2) << endl;
    cout << setIthBit(6, 3) << endl;
    cout << clearIthBit(6, 2) << endl;

    return 0;
}

// !(num & bitMask)
// num & bitMask = 0, after cal it value is 0, so !0 = true, means condition is true than goes inside if
// and any non-zero value in cpp is true, like, its value is 4, than !4 = false, b/c !true = false, so condition is false

// Because in C/C++, 0 means false and any non-zero value means true.
// The logical NOT operator simply flips that truth value.