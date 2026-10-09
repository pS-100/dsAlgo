//static var
#include <iostream>

using namespace std;

void counter() {
    static int n = 0;       
    cout << n++ << endl;
}

int main() {
    counter();  //0 //if not using static keyword than give o/p-> 0
    counter();  //1 //0


    return 0;
}