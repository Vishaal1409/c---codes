#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>

using namespace std;

using AdjList = unordered_map<int, vector<int>>;

bool canFinish(int numCourses, const vector<pair<int, int>>& prerequisites) {
    AdjList adj;
    vector<int> in_degree(numCourses, 0);

    for (const auto& pre : prerequisites) {
        int u = pre.second; 
        int v = pre.first; 
        
        adj[u].push_back(v);
        in_degree[v]++;
    }

    queue<int> q;
    for (int i = 0; i < numCourses; ++i) {
        if (in_degree[i] == 0) {
            q.push(i);
        }
    }

    int courses_taken = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        courses_taken++;

        if (adj.count(u)) {
            for (int v : adj.at(u)) {
                in_degree[v]--;
                if (in_degree[v] == 0) {
                    q.push(v);
                }
            }
        }
    }

    return courses_taken == numCourses;
}

int main() {
    int numCourses = 4;
    vector<pair<int, int>> prereqs = {{1, 0}, {2, 0}, {3, 1}, {3, 2}}; 

    cout << "Can all courses be finished: " << (canFinish(numCourses, prereqs) ? "Yes" : "No") << endl; 
    return 0;
}