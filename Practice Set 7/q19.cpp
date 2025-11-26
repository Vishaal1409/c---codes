#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

int lengthOfLongestSubstring(const string& s) {
    int n = s.length();
    if (n == 0) return 0;

    unordered_set<char> window_chars;
    int left = 0;
    int max_length = 0;

    for (int right = 0; right < n; ++right) {
      
        char current_char = s[right];

        while (window_chars.count(current_char)) {
            window_chars.erase(s[left]);
            left++;
        }

        window_chars.insert(current_char);

        max_length = max(max_length, right - left + 1);
    }

    return max_length;
}

int main() {
    string s = "abcabcbb";
    cout << "Longest Substring Length: " << lengthOfLongestSubstring(s) << endl; 
    return 0;
}