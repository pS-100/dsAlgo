#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

int maxChainLength(vector<pair<int, int>> pair)
{
    int n = pair.size();

    sort(pair.begin(), pair.end(), compare);

    int ans = 1;
    int currEnd = pair[0].second;
    for (int i = 1; i < n; i++)
    {
        if (currEnd <= pair[i].first)
        {
            ans++;
            currEnd = pair[i].second;
        }
    }
    cout << ans;

    return ans;
}

int main()
{
    vector<int> a = {5, 39, 5, 27, 50};
    vector<int> b = {24, 60, 28, 40, 90};

    int n = a.size();
    vector<pair<int, int>> pair(n, make_pair(0, 0));
    for (int i = 0; i < n; i++)
    {
        pair[i] = make_pair(a[i], b[i]);
    }

    maxChainLength(pair);

    return 0;
}