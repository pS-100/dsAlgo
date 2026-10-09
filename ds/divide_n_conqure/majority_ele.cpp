#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[], int st, int end, int mid) // O(n)
{
    vector<int> temp;
    int i = st, j = mid + 1;

    // compare left n right element & add to temp
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    // either i or j loop will run
    // add left arr element if remaing
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    // add right-side arr element if remaing
    while (j <= end)
    {
        temp.push_back(arr[j++]);
    }

    for (int i = st, x = 0; i <= end; i++)
    {
        arr[i] = temp[x++];
    }
}

void mergeSort(int arr[], int st, int end) // O(n log n)
{
    if (st >= end)
    {
        return;
    }

    int mid = st + (end - st) / 2;
    mergeSort(arr, st, mid);      // left
    mergeSort(arr, mid + 1, end); // right

    merge(arr, st, end, mid); // compare n merge, i.e, conqure
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void majorityEle(int arr[], int n)
{
    int cnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            cout << cnt++;
        }
        else
        {
            cnt = 1;
        }
        if (cnt > n/2)
        {
            cout << "\n" << arr[i];
            return;
        }
    }
    cout << "\nNo majority element";
}   

int main()
{
    int arr[] = {6, 2, 2, 5, 2, 4, 2, 2};
    int n = 8;

    mergeSort(arr, 0, n - 1);
    printArr(arr, n);
    majorityEle(arr, n);

    return 0;
}