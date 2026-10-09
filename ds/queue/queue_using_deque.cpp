#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> deq;

    deq.push_back(1);
    deq.push_back(2);
    deq.push_back(3);
    deq.push_back(4);

    while (!deq.empty())
    {
        cout << deq.front() << " ";
        deq.pop_front();
    }

    return 0;
}