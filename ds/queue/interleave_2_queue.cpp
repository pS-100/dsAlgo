#include <iostream>
#include <queue>

using namespace std;

void interleave2queue(queue<int> &org) {
    queue<int> first;

    int half = org.size() / 2;

    // Put first half into first queue
    for(int i = 0; i < half; i++) {
        first.push(org.front());
        org.pop();
    }

    // Interleave both halves
    while(!first.empty()) {
        org.push(first.front());
        first.pop();

        org.push(org.front());
        org.pop();
    }
}

int main() {
    queue<int> org;

    for(int i = 1; i <= 10; i++) {
        org.push(i);
    }

    interleave2queue(org);

    while(!org.empty()) {
        cout << org.front() << " ";
        org.pop();
    }

    return 0;
}