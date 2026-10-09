#include <iostream>
using namespace std;

void maxSubarrSum(int arr[], int n)
{

    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout << currSum << ", ";
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    cout << "Max SubArray Sum = " << maxSum;
}

void maxSubarrSum2(int arr[], int n)
{

    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            cout << currSum << ", ";
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    cout << "Max SubArray Sum2 = " << maxSum;
}

void maxSubarrSum3(int arr[], int n)
{

    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0) {
            currSum = 0;
        } 
        
    }
    cout << "Max SubArray Sum3 = " << maxSum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarrSum3(arr, n);

    return 0;
}