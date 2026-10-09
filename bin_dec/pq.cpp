#include<iostream>
using namespace std;

void binDec(int binNum) {
    int n = binNum;
    int decNum = 0;
    int pow = 1;

    while( n > 0) {
        int lastDig = n % 10;
        decNum += lastDig * pow;
        pow *= 2;
        n = n / 10;
    }
    cout << decNum << endl;
}

int main() {
    binDec(111111);
    binDec(10110);
    binDec(10011);
    binDec(110010);
    return 0;
}