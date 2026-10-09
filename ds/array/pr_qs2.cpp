#include <iostream>
using namespace std;

void pivotArr(int *arr, int n, int p)
{
    int pivotArr[5000];
    for (int i = p; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            pivotArr[j] = arr[i];
            cout << pivotArr[j] << " ";
        }
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(int);

    int p = 3;

    pivotArr(arr, n, p);

    return 0;
}

 