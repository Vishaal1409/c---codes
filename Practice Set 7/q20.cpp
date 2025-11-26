#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>

using namespace std;

int minCostToConnectRopes(const vector<int>& lengths) {
    if (lengths.size() <= 1) return 0;

    priority_queue<int, vector<int>, greater<int>> min_heap;

    for (int length : lengths) {
        min_heap.push(length);
    }

    int total_cost = 0;

    while (min_heap.size() > 1) {
        int rope1 = min_heap.top();
        min_heap.pop();
        int rope2 = min_heap.top();
        min_heap.pop();

        int current_cost = rope1 + rope2;
        total_cost += current_cost;

        min_heap.push(current_cost);
    }

    return total_cost;
}

int main() {
    vector<int> lengths = {4, 3, 2, 6};
    cout << "Minimum Total Cost: " << minCostToConnectRopes(lengths) << endl; 
    return 0;
}