#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
using Interval = pair<int, int>;

vector<Interval> mergeIntervals(vector<Interval>& intervals) {
    if (intervals.empty()) {
        return {};
    }

    sort(intervals.begin(), intervals.end());

    vector<Interval> merged;
    merged.push_back(intervals[0]);

    for (size_t i = 1; i < intervals.size(); ++i) {
        Interval& last_merged = merged.back();
        Interval current = intervals[i];

        if (current.first <= last_merged.second) {
         
            last_merged.second = max(last_merged.second, current.second);
        } else {
            merged.push_back(current);
        }
    }

    return merged;
}

int main() {
    vector<Interval> intervals = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};

    vector<Interval> merged = mergeIntervals(intervals);

    cout << "Merged Intervals:" << endl;
    for (const auto& interval : merged) {
        cout << "[" << interval.first << ", " << interval.second << "] ";
    }
    cout << endl; 

    return 0;
}