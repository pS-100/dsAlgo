#include <iostream>

using namespace std;

int search(int arr[], int st, int end, int target)
{
    int mid = st + (end - st) / 2;

    if (st > end)
    {
        return -1;
    }

    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[st] <= arr[mid])
    {

        if (target >= arr[st] && target < arr[mid])
        {
            return search(arr, st, mid - 1, target);
        }
        else
        {
            return search(arr, mid + 1, end, target);
        }
    }
    else
    {
        if (target > arr[mid] && target <= arr[end])
        {
            return search(arr, mid + 1, end, target);
        }
        else
        {
            return search(arr, st, mid - 1, target);
        }
    }
}

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = 8;

    cout << search(arr, 0, 7, 0);

    return 0;
}