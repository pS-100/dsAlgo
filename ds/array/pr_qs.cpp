#include<iostream>
using namespace std;

int main() {
    int arr[] {1, 3, 5, 7, 9, 1};
    int n = sizeof(arr) / sizeof(int);

     for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    cout << "duplicate " << i << " "<< j << endl;
                    return 1;
                }
            }
        }
        cout << "no duplicate" << endl;
        return 0;
}