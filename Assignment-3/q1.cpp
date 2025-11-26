#include <iostream>
#include <vector>
#include <unordered_map> 
#include <algorithm>

using namespace std;
vector<pair<int, int>> twoSum(const vector<int>& nums, int target) {
    unordered_map<int, int> num_counts;
    vector<pair<int, int>> result;

    for (int num : nums) {
        int complement = target - num;
        if (num_counts.count(complement)) {
            pair<int, int> found_pair = {num, complement};
            if (found_pair.first > found_pair.second) {
                swap(found_pair.first, found_pair.second);
            }
        }
        num_counts[num]++;
    }

    for (auto const& [num, count] : num_counts) {
        int complement = target - num;

        if (complement == num) {
            if (count >= 2) {
                result.push_back({num, num});
            }
        } else if (complement > num) {
            if (num_counts.count(complement)) {
                result.push_back({num, complement});
            }
        }
    }

    return result;
}

int main() {
    vector<int> nums = {3, 2, 4, 3, 5, 1};
    int target = 6;
    vector<pair<int, int>> pairs = twoSum(nums, target);

    cout << "Two Sum Pairs for target " << target << ":" << endl;
    if (pairs.empty()) {
        cout << "No pairs found." << endl;
    } else {
        for (const auto& p : pairs) {
            cout << "(" << p.first << ", " << p.second << ") ";
        }
        cout << endl;
    }

    return 0;
}