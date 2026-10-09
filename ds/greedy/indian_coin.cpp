#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> coin = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int val = 121;
    val = 590;

    int n = coin.size();
    int ans = 0;
    for (int i = n - 1; i >= 0 && val > 0; i--)                //O(n) almost const b/c coin are fix
    {
        if (coin[i] <= val)
        {   
            cout << "coin: " << coin[i] << "\n";
            ans += val / coin[i]; // no. of coin
            val = val % coin[i]; // reamining value of val
        }
    }
    cout << ans;

    return 0;
}
