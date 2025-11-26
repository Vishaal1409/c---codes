#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    if (n < 3) return {};

    sort(nums.begin(), nums.end());

    vector<vector<int>> result;

    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int target = -nums[i];
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int current_sum = nums[left] + nums[right];

            if (current_sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});
                
                left++;
                right--;

                while (left < right && nums[left] == nums[left - 1]) left++;
                while (left < right && nums[right] == nums[right + 1]) right--;
            } else if (current_sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, 4};
    vector<vector<int>> triplets = threeSum(nums);

    cout << "3 Sum Triplets:" << endl;
    for (const auto& triplet : triplets) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "] ";
    }
    cout << endl; 
    return 0;
}