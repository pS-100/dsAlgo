#include <iostream>
using namespace std;

void maxProfit(int prices[], int n)
{
    int bestBuyPrice[100000];       //in cpp, we cant initialize arr with n i.e, dynmaically, therefore using extreme high value that also given in leetcode as constraint
    bestBuyPrice[0] = INT_MAX;
    // cout << bestBuyPrice[0] << ", ";

    for (int i = 1; i < n; i++)
    {
        bestBuyPrice[i] = min(bestBuyPrice[i-1], prices[i-1]);
        // cout << bestBuyPrice[i] << ", ";
    }

    int maxProfit = 0;
    for(int i = 0; i < n; i++) {
          int currProfit = prices[i] - bestBuyPrice[i];  
          maxProfit = max(currProfit, maxProfit);
    }
    cout << maxProfit;   
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);

    maxProfit(prices, n);

    return 0;
}