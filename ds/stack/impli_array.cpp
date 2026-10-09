#include <iostream>
#include <vector>

using namespace std;

class Stack {
    int arr[100];
public: 
    void push(int val) {
        arr.push_back(val);
    }
};

int main()
{
    // Stack s;

    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);

    // while (!s.isEmpty())
    // {
    //     cout << "| " << s.top() << " |" << "\n";
    //     cout << "_____" << endl;
    //     s.pop();
    // }

    return 0;
}