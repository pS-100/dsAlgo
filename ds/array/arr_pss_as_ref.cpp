#include<iostream>
using namespace std;

void printArr(int *nums, int n) {

    cout << sizeof(nums) << endl; //8 = size of int pointer

    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(int);

    printArr(arr, n);  //arr eq. pointer and n also pass b/c pointer point only starting loc so fun not get end no.

    return 0;
}
