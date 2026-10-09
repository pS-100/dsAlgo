#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

class Job
{
public:
    int idx;
    int deadline;
    int profit;

    Job(int idx, int deadline, int profit)
    {
        this->idx = idx;
        this->deadline = deadline;
        this->profit = profit;
    }
};

int maxProfit(vector<pair<int, int>> pair)
{
    int n = pair.size();
    vector<Job> jobs;

    for (int i = 0; i < n; i++)
    {
        jobs.emplace_back(i, pair[i].first, pair[i].second);
    }

    sort(jobs.begin(), jobs.end(), [](Job &a, Job &b)
         { return a.profit > b.profit; });

    int profit = jobs[0].profit;
    int safedeadline = jobs[0].deadline + 1;
    cout << "Selecting job: " << jobs[0].idx << "\n";
    for (int i = 1; i < n; i++)
    {
        if (jobs[i].deadline >= safedeadline)
        {
            cout << "Selecting job: " << jobs[i].idx << "\n";
            profit += jobs[i].profit;
            safedeadline++;
        }
    }

    return profit;
}

int main()
{
    vector<int> deadline = {4, 1, 1, 1};
    vector<int> profit = {20, 10, 40, 30};

    int n = deadline.size();
    vector<pair<int, int>> jobs(n, make_pair(0, 0));

    for (int i = 0; i < n; i++)
    {
        jobs[i] = make_pair(deadline[i], profit[i]);
    }

    cout << maxProfit(jobs);

    return 0;
}