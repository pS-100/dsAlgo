#include <iostream>
using namespace std;

int updateIth(int num, int i, int val)
{
    num = num & ~(1 << i); //clear ith bit

    int bitMask = val << i;

    return (num | bitMask);
}

int main()
{
    cout << updateIth(7, 2, 0) << endl;

    return 0;
}