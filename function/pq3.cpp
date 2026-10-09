#include<iostream>
using namespace std;

bool checkPrime(int n) {
    if ( n == 1) return false;

    for(int i = 2; i <= n-1; i++) {
       if( n % i == 0 ) {
        return false;
       }
    }
    return true;
}

bool checkPrime2(int n) {
    if ( n == 1) return false;

    for(int i = 2; i*i <= n; i++) {
       if( n % i == 0 ) {
        return false;
       }
    }
    return true;
}

int main() {
    cout << checkPrime(6) << endl;
    cout << checkPrime2(3);
    return 0;
}