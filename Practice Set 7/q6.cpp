#include <iostream>
#include <vector>
#include <string>
#include <unordered_map> 
#include <algorithm> 

using namespace std;

vector<vector<string>> groupAnagrams(const vector<string>& strs) {
   
    unordered_map<string, vector<string>> groups;

    for (const string& s : strs) {
        string key = s;
      
        sort(key.begin(), key.end());

        groups[key].push_back(s);
    }

    vector<vector<string>> result;
    for (auto const& [key, anagram_list] : groups) {
        result.push_back(anagram_list);
    }

    return result;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> anagram_groups = groupAnagrams(strs);

    cout << "Grouped Anagrams:" << endl;
    for (const auto& group : anagram_groups) {
        cout << "[";
        for (size_t i = 0; i < group.size(); ++i) {
            cout << "\"" << group[i] << "\"" << (i < group.size() - 1 ? ", " : "");
        }
        cout << "]" << endl;
    }

    return 0;
}