#include<iostream>
#include<string>
using namespace std;

void printSubSet(string s, string subStr) {

    if(s.size() == 0) {
        cout << subStr << "\n";
        return;
    }

    char ch = s[0];

    //yes choice
    printSubSet( s.substr(1, s.size() - 1), subStr+ch);

    //no choice
    printSubSet( s.substr(1, s.size() - 1), subStr);

}

int main() {
    string s = "abc";
    string subStr = "";

    printSubSet(s, subStr);

    return 0;
}