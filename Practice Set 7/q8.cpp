#include <iostream>
#include <vector>
#include <stack> 
#include <algorithm>

using namespace std;
int largestRectangleArea(const vector<int>& heights) {
 
    vector<int> h = heights;
    h.push_back(0);
    int n = h.size();

    stack<int> s;
    int max_area = 0;

    for (int i = 0; i < n; ++i) {
        while (!s.empty() && h[s.top()] >= h[i]) {
            int height = h[s.top()];
            s.pop();

            int width;
            if (s.empty()) {
                width = i;
            } else {
                width = i - s.top() - 1;
            }

            max_area = max(max_area, height * width);
        }
        s.push(i);
    }

    return max_area;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    int area = largestRectangleArea(heights);

    cout << "Largest Rectangle Area: " << area << endl; 

    return 0;
}