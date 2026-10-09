#include <iostream>
using namespace std;

bool checkPowOf2(int num)
{
    int bitMask = num - 1;

    if (!(num & bitMask))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << checkPowOf2(16) << endl;

    return 0;
}