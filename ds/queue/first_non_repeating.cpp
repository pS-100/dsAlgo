#include <iostream>
#include <queue>
#include <string>

using namespace std;

void firstNonRepeating(string s) {  //tc: O(n) sc: O(n)
    int freq[26] = {0};
    queue<char> q;

    for(int i = 0; i < s.size(); i++) {
        char ch = s[i];
        q.push(ch);
        freq[ch-'a']++;
        

        while(!q.empty() && freq[q.front()-'a'] > 1) {
            q.pop();
        }

        if(q.empty()) {
            cout << "-1 ";
        } else {
            cout << q.front() << " ";
        }
    }
     
     
}

int main() {
    string s = "aabccxb";
    firstNonRepeating(s);

    return 0;
}