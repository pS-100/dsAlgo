#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second > p2.second;
}

int maxProfit(vector<pair<int, int>> job) {
    sort(job.begin(), job.end(), compare); //O(nlog n)

    int profit = job[0].second;
    int safedeadline = job[0].first;
    for(int i = 1; i < job.size(); i++) {
        if(job[i].first > safedeadline) {
            profit += job[i].second;
            safedeadline++;
        }
    }
 
    return profit;
}

int main() {
    vector<int> deadline = {4, 1, 1, 1};
    vector<int> profit = {20, 10, 40, 30};

    int n = deadline.size();
    vector<pair<int, int>> jobs(n, make_pair(0,0));

    for(int i = 0; i < n; i++) {
        jobs[i] = make_pair(deadline[i], profit[i]);
    }

    cout << maxProfit(jobs);

    return 0;
}