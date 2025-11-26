#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Adjacency List Type
using AdjList = unordered_map<int, vector<int>>;


bool dfsCheck(int u, const AdjList& adj, vector<int>& visited) {
    visited[u] = 1;

    if (adj.count(u)) { 
        for (int v : adj.at(u)) {
            if (visited[v] == 1) {
               
                return true;
            }
            if (visited[v] == 0) {
           
                if (dfsCheck(v, adj, visited)) {
                    return true;
                }
            }
     
        }
    }

    visited[u] = 2;
    return false;
}

bool hasCycleDirected(const AdjList& adj, int numNodes) {
    
    vector<int> visited(numNodes, 0);

    for (int i = 0; i < numNodes; ++i) {
        if (visited[i] == 0) {
            if (dfsCheck(i, adj, visited)) {
                return true; 
            }
        }
    }
    return false;
}

int main() {
    
    AdjList adj1 = {
        {0, {1}},
        {1, {2}},
        {2, {0, 3}},
        {3, {}}
    };
    int numNodes1 = 4;
    cout << "Graph 1 has a cycle: " << (hasCycleDirected(adj1, numNodes1) ? "Yes" : "No") << endl; 

    
    AdjList adj2 = {
        {0, {1, 2}},
        {1, {3}},
        {2, {3}},
        {3, {}}
    };
    int numNodes2 = 4;
    cout << "Graph 2 has a cycle: " << (hasCycleDirected(adj2, numNodes2) ? "Yes" : "No") << endl; 
    return 0;
}