#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subarraySum(const vector<int>& nums, int k) {
    unordered_map<int, int> prefix_sum_counts;
    prefix_sum_counts[0] = 1; 

    int current_prefix_sum = 0;
    int count = 0;

    for (int num : nums) {
        current_prefix_sum += num;
        
        int needed_prefix_sum = current_prefix_sum - k;

        if (prefix_sum_counts.count(needed_prefix_sum)) {
            count += prefix_sum_counts.at(needed_prefix_sum);
        }

        prefix_sum_counts[current_prefix_sum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 1, 1};
    int k = 2;

    cout << "Count of subarrays with sum " << k << ": " << subarraySum(nums, k) << endl; 
    return 0;
}