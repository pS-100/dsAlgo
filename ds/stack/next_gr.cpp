#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void nextGreater(vector<int> &number, vector<int> &greaterNumber)
{
    stack<int> s;

    for (int i = number.size() - 1; i >= 0; i--)
    {
        int currNumber = number[i];
        while (!s.empty() && currNumber >= s.top())
        {
            s.pop();
        }

        if (s.empty())
        {
            greaterNumber[i] = -1;
        }
        else
        {
            greaterNumber[i] = s.top();
        }
        s.push(number[i]);
    }
}

int main()
{
    vector<int> number = {6, 8, 0, 1, 3};
    vector<int> greaterNumber = {0, 0, 0, 0, 0};

    nextGreater(number, greaterNumber);

    for (int i = 0; i < greaterNumber.size(); i++)
    {
        cout << greaterNumber[i] << " ";
    }
    cout << endl;

    return 0;
}