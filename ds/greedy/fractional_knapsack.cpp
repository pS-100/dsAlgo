#include <iostream>
#include <utility>  //pairs
#include <algorithm> //sort
#include <vector>
using namespace std;

bool compare(pair<double, int> p1, pair<double, int> p2) {      //O(n)
    return p1.first > p2.first;//descending order based on ratio
}

void fractionalKnapsack(vector<int> val, vector<int> wt, int w) //O(n + nlogn + n) = O(nlogn)
{
    int n = val.size();
    vector<pair<double, int>> ratio(n, make_pair(0.0, 0)); //pair(ration, idx)

    for (int i = 0; i < n; i++)             //O(n)
    {
        double r = val[i]/ (double)wt[i];
        ratio[i] = make_pair(r, i);
    }

    sort(ratio.begin(), ratio.end(), compare);  //O(nlogn)

    int ans = 0.0;
    for(int i = 0; i < n; i++) {        //O(n)
        if(wt[ratio[i].second] <= w) {
            ans += val[ratio[i].second];

            w -= wt[ratio[i].second];
        } else {
            ans += w * ratio[i].first;
            w = 0;
            break;
        }
    }
    cout << ans;
}

int main()
{
    vector<int> val = {100, 60, 120};
    vector<int> wt = {20, 10, 30};
    int w = 50;

    fractionalKnapsack(val, wt, w);

    return 0;
}