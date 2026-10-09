#include <iostream>
#include <stack>

using namespace std;

void pushAtBottom(stack<int> &s, int temp)
{
    if (s.empty())
    {
        s.push(temp);
        return;
    }
    int pTemp = s.top();
    s.pop();
    pushAtBottom(s, temp);
    s.push(pTemp);
}

void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s, temp);
}

void printStack(stack<int> s) {
    while(!s.empty()) {
        cout<<s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

int main()
{
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    printStack(s);

    reverse(s);
    printStack(s);


    return 0;
}
