#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
#include <limits>

using namespace std;

using Weight = int;
using Node = int;
using Edge = pair<Node, Weight>;
using AdjList = unordered_map<Node, vector<Edge>>;

vector<Weight> dijkstra(const AdjList& graph, Node startNode, int numNodes) {
    vector<Weight> distances(numNodes, numeric_limits<Weight>::max());
    
    priority_queue<pair<Weight, Node>, vector<pair<Weight, Node>>, greater<pair<Weight, Node>>> pq;

    distances[startNode] = 0;
    pq.push({0, startNode});

    while (!pq.empty()) {
        Weight dist = pq.top().first;
        Node u = pq.top().second;
        pq.pop();

        if (dist > distances[u]) continue;

        if (graph.count(u)) {
            for (const auto& edge : graph.at(u)) {
                Node v = edge.first;
                Weight weight = edge.second;

                if (distances[u] + weight < distances[v]) {
                    distances[v] = distances[u] + weight;
                    pq.push({distances[v], v});
                }
            }
        }
    }

    return distances;
}

int main() {
    AdjList graph = {
        {0, {{1, 4}, {2, 1}}},
        {1, {{3, 1}}},
        {2, {{1, 2}, {3, 5}}},
        {3, {{4, 3}}},
        {4, {}}
    };
    int numNodes = 5;
    Node startNode = 0;

    vector<Weight> shortestPaths = dijkstra(graph, startNode, numNodes);

    cout << "Shortest paths from node " << startNode << ":" << endl;
    for (int i = 0; i < numNodes; ++i) {
        cout << "Node " << i << ": " << shortestPaths[i] << endl;
    }
    return 0;
}