#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseString(string str) {      //tc: O(n), sc: O(n)
    string ans;
    stack<char> s;      //n size of stack

    for(int i=0; i < str.size(); i++) { //n times
        s.push(str[i]);
    }

    while(!s.empty()) {
        char top = s.top();
        ans += top;

        s.pop();
    }

    return ans;
}


int main() {
    string str = "abcd";
    cout << reverseString(str);

    return 0;
}
