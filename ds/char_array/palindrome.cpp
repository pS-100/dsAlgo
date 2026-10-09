#include<iostream>
#include<cstring>

using namespace std;

bool isPlaindrome(char word[], int n) {
    int st = 0, end = n-1;

    while(st < end) {
        if(word[st++] != word[end--]) {
            cout << "not palindrome";
            return false;
        }
    }
    cout << "valid palindrome";
    return true;
}

int main() {
    char word[] = "racecar";

    isPlaindrome(word, strlen(word));

    return 0;
}

//char arrau == cstring