#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<int, string> m;
    m[101] = "jhon";
    m[102] = "apple";
    m[103] = "boy";

    cout << m[101] << "\n";

    m[101] = "abc";
    cout << m[101] << "\n";

    cout << m.count(103) << "\n";
    cout << m.count(100) << "\n";

    for(auto it: m) {
        cout << it.first <<": "<< it.second << "\n";
    }

    return 0;
}