#include<iostream>
using namespace std;

int product(int a, int b) {
    return( a * b);
}

void oddEven(int n) {
    if (n >= 0 && n % 2 == 0  ) {
        cout << n << " is an even number";
    } else {
        cout << n << " is an odd number";
    }
}

int main() {
    cout << product(9, 8) << endl;
    oddEven(23);

    return 0;
}