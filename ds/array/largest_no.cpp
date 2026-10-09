#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 8, 1, 9, 7};

    int n = sizeof(arr) / sizeof(arr);

    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "largest number: " << max << endl;

    //smallest number
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout <<"smallest number: " << min;

    return 0;
}