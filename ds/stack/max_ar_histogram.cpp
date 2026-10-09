#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void  maxArea(vector<int> height) {
    int h = height.size();
    vector<int> nsl(h);
    vector<int> nsr(h);
    stack<int> s;

    //next smaller left
    nsl[0] = -1;
    s.push(0);

    for(int i = 1; i < h; i++) {
        int curr = height[i];

        while(!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }
        if(s.empty()) {
            nsl[i] = -1;
        }
        else {
            nsl[i] = s.top();
        }
        s.push(i);
    }

    while(!s.empty()) {
        s.pop();
    }
    //next smaller right
    nsr[h-1] = h;
    s.push(h-1);
    for(int i = h-2; i >= 0; i--) {
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }
        if(s.empty()) {
            nsr[i] = h;
        }
        else {
            nsr[i] = s.top();
        }
        s.push(i);
    }

    int maxArea = 0;
    for(int i = 0; i < h; i++) {
        int area = height[i] * (nsr[i] - nsl[i] -1);
        maxArea = max(area, maxArea);
    }

    cout << "Max Area of Histogram: "<< maxArea << endl;

}

int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nsl(n);
        vector<int> nsr(n);
        stack<int> s;

        //next smallest left
        nsl[0] = -1;
        s.push(0);
        for(int i = 1; i<n; i++) {
            while(!s.empty() && heights[i] <= heights[s.top()]) {
                s.pop();
            }
            if(s.empty()) {
                nsl[i] = -1;
            } else {
                nsl[i] = s.top();
            }
            s.push(i);
        }

        while(!s.empty()) {
            s.pop();
        }

        //next smallest right
        nsr[n-1] = n;
        s.push(n-1);
        for(int i = n-2; i >= 0; i--) {
            while(!s.empty() && heights[i] <= heights[s.top()]) {
                s.pop();
            }
            if(s.empty()) {
                nsr[i] = n;
            } else {
                nsr[i] = s.top();
            }
            s.push(i);
        }

        int maxArea = 0;
        for(int i = 0; i < n; i++) {
            int area = heights[i] * (nsr[i] - nsl[i] -1);
            maxArea = max(area, maxArea);
        }

        return maxArea;

    }

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    // maxArea(height);

    cout << largestRectangleArea(heights);
     
    return 0;
}