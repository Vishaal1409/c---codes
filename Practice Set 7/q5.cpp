#include <iostream>
#include <vector>
#include <deque> 
#include <algorithm>

using namespace std;
vector<int> slidingWindowMaximum(const vector<int>& nums, int k) {
    if (nums.empty() || k == 0 || k > nums.size()) {
        return {};
    }

    vector<int> result;
    deque<int> d;

    for (int i = 0; i < nums.size(); ++i) {
        while (!d.empty() && nums[d.back()] <= nums[i]) {
            d.pop_back();
        }

        d.push_back(i);

        if (d.front() == i - k) {
            d.pop_front();
        }

        if (i >= k - 1) {
            result.push_back(nums[d.front()]);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> max_values = slidingWindowMaximum(nums, k);

    cout << "Sliding Window Maximums for k=" << k << ":" << endl;
    for (int val : max_values) {
        cout << val << " ";
    }
    cout << endl; 

    return 0;
}