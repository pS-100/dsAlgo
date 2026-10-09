#include<iostream>
using namespace std;

void binDec(int binNum) {
    int n = binNum;
    int decNum = 0;
    int pow = 1; //2^0 2^1 2^2...

    while(n > 0) {
        int lastDig = n % 10;
        decNum += lastDig * pow;
        pow *= 2;
        n = n/10;
        //cout<< lastDig <<endl;
    }
    cout << decNum << endl;
}

void decBin(int decNum) {
    int n = decNum;
    int binNum = 0;
    int pow = 1; //10^0 10^1 10^2...

    while( n > 0) {
        int rem = n % 2;
        binNum += rem * pow;
        pow *= 10;
        n = n/2;
    }
    cout << binNum;
}

int main() {
    binDec(111);
    decBin(10);
    return 0;
}