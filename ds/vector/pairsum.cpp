#include <iostream>
#include <vector>

using namespace std;

int pairSum(vector<int> arr, int target) {
    int st = 0, end = arr.size() - 1;
    int checkSum = 0;

    while(st < end) {
        checkSum = arr[st] + arr[end];

        if(checkSum == target) {
            cout << st << ", " << end << endl;
            return 0;
        } else if (checkSum > target) {
            end--;
        } else {
            st++;
        }
    }
    return 0;
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    pairSum(vec, target);

    return 0;
}