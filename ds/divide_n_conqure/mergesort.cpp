#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[], int st, int end, int mid) //O(n)
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

    //either i or j loop will run
    //add left arr element if remaing
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    //add right-side arr element if remaing
    while (j <= end)
    {
        temp.push_back(arr[j++]);
    }

    for(int i = st, x = 0; i <= end; i++) {
        arr[i] = temp[x++];
    }

}

void mergeSort(int arr[], int st, int end)  //O(n log n)
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

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++ ) {
        cout << arr[i] << " " ;
    }
}

int main()
{   
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    mergeSort(arr, 0, n-1);
    printArr(arr, n);

    return 0;
}