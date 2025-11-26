#include <iostream>
#include <vector>
#include <stack> 
#include <algorithm>

using namespace std;

vector<int> nextGreaterElement(const vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return {};

    vector<int> result(n, -1);
    stack<int> s;
    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && nums[s.top()] <= nums[i]) {
            s.pop();
        }

        if (!s.empty()) {
            result[i] = nums[s.top()];
        }

        s.push(i);
    }

    return result;
}

int main() {
    vector<int> nums = {4, 5, 2, 25};
    vector<int> nge = nextGreaterElement(nums);

    cout << "Next Greater Element for each element:" << endl;
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i] << " -> " << nge[i] << endl;
    }

    return 0;
}