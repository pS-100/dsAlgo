#include <iostream>
using namespace std;

void searchKey(int mat[][4], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == key)
            {
                cout << i << j;
            }
        }
    }
}
void searchKey2(int mat[][4], int n, int m, int key)
{
    int st = 0, end = n - 1;

    for (int i = 0; i < n; i++)
    {
        while (st <= end)
        {
            int mid = (st + end) / 2;

            if (mat[i][mid] == key)
            {
                cout << i << mid;
            }
            else if (mat[i][mid] < key)
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
}

// by stairecase method
int searchKey3(int mat[][4], int n, int m, int key)
{

    int i = n - 1, j = 0;

    while (i >= 0 && j < m)
    {

        if (mat[i][j] == key)
        {
            cout << "found" << "," << mat[i][j];
            return 1;
        }
        else if(key < mat[i][j])
        {
            i--;
            // cout << row << endl;
        }
        else  
        {
            j++;
        }
    }
    cout << "key not found";
    return 0;
}

int main()
{
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    int key = 100;

    // searchKey(mat, 4, 4, key);
    // searchKey2(mat, 4, 4, key);
    searchKey3(mat, 4, 4, key);

    return 0;
}