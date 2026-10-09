#include<iostream>
#include<cstring>

using namespace std;

void strReverse(char str[], int n) {
    int st = 0, end = n - 1;

    while(st < end) {
        swap(str[st++], str[end--]);
        // st++;
        // end--;
    }
}

int main() {
    char str[] = "code";

    strReverse(str, strlen(str));
    cout << str << endl;

    return 0;
}