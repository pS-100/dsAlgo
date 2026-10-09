#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1, 4, 7, 8};
    vector<int> b = {2, 3, 5, 6};

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int absDiff = 0;

    for(int i = 0; i < a.size(); i++) {
        absDiff += abs(a[i] - b[i]);
    }
    cout << absDiff; 
    return 0;
}