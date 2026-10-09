#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void stockSpan(vector<int> &stock, vector<int> &span)
{
    stack<int> s;

    for (int i = 0; i < stock.size(); i++)
    {
        int currStock = stock[i];
        while (!s.empty() && currStock >= stock[s.top()])
        {
            s.pop();
        }
        if (s.empty())
        {
            span[i] = i + 1;
        }
        else
        {
            int prevHigh = s.top();
            span[i] = i - prevHigh;
        }
        s.push(i);
    }

    for(int i = 0; i < span.size(); i++) {
        cout << span[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> stock = {100, 80, 60, 70, 60, 85, 100};
    vector<int> span = {0, 0, 0, 0, 0, 0, 0};

    stockSpan(stock, span);

     for(int i = 0; i < span.size(); i++) {
        cout << span[i] << " ";
    }
    cout << endl;

    return 0;
}
