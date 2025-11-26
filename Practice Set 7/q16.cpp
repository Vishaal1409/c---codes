#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMinPlatforms(vector<int>& arrival, vector<int>& departure) {
    int n = arrival.size();
    if (n == 0) return 0;

    sort(arrival.begin(), arrival.end());
    sort(departure.begin(), departure.end());

    int platforms = 0;
    int maxPlatforms = 0;
    int arr_ptr = 0;
    int dep_ptr = 0;

    while (arr_ptr < n && dep_ptr < n) {
        if (arrival[arr_ptr] <= departure[dep_ptr]) {
        
            platforms++;
            arr_ptr++;
        } else {
            platforms--;
            dep_ptr++;
        }
        maxPlatforms = max(maxPlatforms, platforms);
    }

    return maxPlatforms;
}

int main() {
    vector<int> arrival = {900, 940, 950, 1100, 1500, 1800};
    vector<int> departure = {910, 1200, 1120, 1130, 1900, 2000};

    cout << "Minimum Platforms Required: " << findMinPlatforms(arrival, departure) << endl; 
    return 0;
}