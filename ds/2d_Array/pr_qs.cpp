#include <iostream>
using namespace std;

void keyCount(int arr[][3], int n, int m, int key)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (key == arr[i][j])
            {
                count++;
                cout << i << " " << j << "\n";
                break;
            }
        }
    }
    cout << count;
}
void rowSum(int nums[][3], int n, int m)
{
    int sum = 0;
    // int nums[1][3] = { };

    for (int j = 0; j < m; j++)
    {

        sum += nums[1][j];
    }

    cout << sum;
}

void transpose(int arr[][3], int n, int m)
{
    int transMat[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transMat[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << transMat[i][j] << " ";
            cout << endl;
        }
    }
}

int arrTo2dArr(int array[], int n, int m) {
    for(int i = 0; i < n; i++) {
        array[i]
    }
}

int main()
{
    int arr[][3] = {{4, 7, 8}, {8, 8, 7}};
    int nums[][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};
    int array[5] = {1, 2, 3, 4, 5};

    // keyCount(arr, 2, 3, 7);
    // rowSum(nums, 3, 3);
    transpose(arr, 2, 3);
    arrTo2dArr(array, 2, 3);

    return 0;
}