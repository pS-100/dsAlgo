#include <iostream>
#include<vector>
using namespace std;

int maxActivity(vector<int> start, vector<int> end)
{
    cout << "Selected Activity: A0\n";
    int count = 1; // A0 selected
    int currTime = end[0];

    for (int i = 1; i < start.size(); i++)
    {
        if (start[i] >= currTime)
        {
            cout << "Selected Activity: A" << i << "\n";
            count++;
            currTime = end[i];
        }
    }
    return count;
}
int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    cout << maxActivity(start, end);
    return 0;
}