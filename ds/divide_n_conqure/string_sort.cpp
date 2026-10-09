#include <iostream>
#include <string>
#include <vector>

using namespace std;

void merge(string arr[], int st, int end, int mid) {
    vector<string> temp;
    int i = st, j = mid + 1;

    while( i <= mid && j <= end) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        }
        else {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    while (j <= end) {
        temp.push_back(arr[j++]);
    }
    
    for(int idx = st, x = 0; idx <= end; idx++) {
        arr[idx] = temp[x++];
    }
    
}

void stringSort(string arr[], int st, int end) {

    if(st >= end) {
        return;
    }
    int mid = st + (end - st) / 2;

    stringSort(arr, st, mid);
    stringSort(arr, mid + 1, end);

    merge(arr, st, end, mid);

}

void printArr(string arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    string arr[] = { "sun", "earth", "mars", "mercury" };
    int n = 4;

    stringSort(arr, 0, n-1);
    printArr(arr, n);

    return 0;
}

//C++ compares characters one by one until it finds a difference or reaches the end of one string.