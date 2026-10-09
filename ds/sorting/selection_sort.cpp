#include<iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void selectionSort(int *arr, int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        
        //loop for find min
        for(int j = i + 1 ; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    printArr(arr, n);

}

int main() {
    int arr[] = {8, 2, 5, 1, 6};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n);

    return 0;
}