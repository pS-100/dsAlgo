#include <iostream>
using namespace std;

void swapArr(int *arr, int n, int srt, int end) {
    int temp = arr[srt];
    arr[srt] = arr[end];
    arr[end] = temp;
}

void printArr(int *arr, int n) {
    for(int i =0 ; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    //with extra space
        // int copyArr[n];
        // for(int i = 0; i < n; i++) {
        //     int j = n-i-1;
        //     copyArr[i] = arr[j];
        // }

        //printArr(arr, n);

    //w/o extra space
    int srt = 0, end = n-1;

    while(srt < end) {
        swapArr(arr, n, srt, end);  //also use built in method of swap i.e, swap(arr[srt], arr[end]);
        srt++;
        end--;
    }

    printArr(arr, n);

    return 0;
}