#include <iostream>
using namespace std;

void countStBit(int num)
{
    int count = 0;

    while(num > 0) {
        count += num & 1;
        num = num >> 1;
    }

    cout << count << endl;
}

int main()
{
    countStBit(10);
    countStBit(7);

    return 0;
}