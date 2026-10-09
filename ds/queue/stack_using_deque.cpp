#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> deq;

    //using front
    deq.push_front(4);
    deq.push_front(3);
    deq.push_front(2);
    deq.push_front(1);

    while (!deq.empty())
    {
        cout << deq.front() << " ";
        deq.pop_front();
    }
    cout << endl;

    //fron back
    deq.push_back(4);
    deq.push_back(3);
    deq.push_back(2);
    deq.push_back(1);

    while (!deq.empty())
    {
        cout << deq.back() << " ";
        deq.pop_back();
    }

    return 0;
}