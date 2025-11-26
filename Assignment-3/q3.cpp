#include <iostream>
#include <vector>
#include <unordered_map> 
#include <queue>         
#include <algorithm>

using namespace std;

vector<int> topKFrequent(const vector<int>& nums, int k) {
    if (k == 0) return {};

    unordered_map<int, int> freq_map;
    for (int num : nums) {
        freq_map[num]++;
    }

    using FreqPair = pair<int, int>;
    priority_queue<FreqPair, vector<FreqPair>, greater<FreqPair>> min_heap;

    for (auto const& [num, freq] : freq_map) {
        min_heap.push({freq, num});

        if (min_heap.size() > k) {
            min_heap.pop();
        }
    }
    vector<int> result;
    while (!min_heap.empty()) {
        result.push_back(min_heap.top().second);
        min_heap.pop();
    }

    return result;
}


int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3, 5, 5, 5, 5};
    int k = 2; 

    vector<int> top_k = topKFrequent(nums, k);

    cout << "Top " << k << " Frequent Elements:" << endl;
    for (int num : top_k) {
        cout << num << " ";
    }
    cout << endl; 

    return 0;
}