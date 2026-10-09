#include <iostream>
using namespace std;

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void countSort(int arr[], int n)
{
    int minVal = INT_MAX, maxVal = INT_MIN;
    int freq[10000] = {0};
    for (int i = 0; i < n; i++)
    {
        minVal = min(arr[i], minVal);
        maxVal = max(arr[i], maxVal);
    }

    // 1st step
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }

    printArr(arr, n);
}

int main()
{
    int arr[] = {5, 1, 1, 1, 3, 2, 3, 2, 2, 2};
    int n = sizeof(arr) / sizeof(int);

    countSort(arr, n);

    

    return 0;
}