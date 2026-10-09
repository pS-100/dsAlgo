#include<iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

//try to push largest element to end
void bubbleSort(int *arr, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {         //ascending order but from just arr[j] < arr[j+1]) change it sort in descending order
                swap(arr[j], arr[j+1]);
            }
            
        }
    }
    printArr(arr, n);
}

int main() {
    int arr[] = {8, 2, 5, 1, 6};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);

    return 0;
}