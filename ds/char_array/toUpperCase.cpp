#include <iostream>
#include <cstring>

using namespace std;

void toUpper(char str[], int n ) {
    for(int i = 0; i < n; i++) {
        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z') {
            continue;
        } else {
            str[i] = ch - 'a' + 'A';
        }
    }

    cout << str << '\n';
}

void toLower(char str[], int n ) {
    for(int i = 0; i < n; i++) {
        char ch = str[i];

        if(ch >= 'a' && ch <= 'z') {
            continue;
        } else {
            str[i] = ch - 'A' + 'a';
        }
    }

    cout << str;
}

int main() {
    char str[] = {'A', 'p', 'P', 'l', 'E' , '\0'};
    int n = strlen(str);
    // int n = sizeof(str) / sizeof(str[0]) - 1; // use when no \0

    toUpper(str, n);
    toLower(str, n);

    return 0;
}