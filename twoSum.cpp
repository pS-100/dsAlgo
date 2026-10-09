#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    int target = 9;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
             if((arr[i] + arr[j]) == target) {
                cout << i << " "<< j;
             }
        }
         
    }
    
}