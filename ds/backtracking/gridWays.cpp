#include <iostream>
#include <string>

using namespace std;

int ways(int r, int c, int n, int m, string ans) {

     // Outside the grid
    if (r >= n || c >= m)
    {
        return 0; // invalid path
    }

    if(r == n-1 && c == m-1 ) {
        cout << ans << "\n";
        return 1;
    }

    int val1 = ways(r, c+1, n, m, ans+'R'); //right
    int val2 = ways(r+1, c, n, m, ans+'D'); //down

    return val1 + val2;
}

int main() {
    string ans = "";
    cout << ways(0, 0, 3, 3, ans);
    return 0;
}