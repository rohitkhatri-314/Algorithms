#include <bits/stdc++.h>
using namespace std;

int dijkstra(vector<vector<int>>& graph, int s, int target){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> min_heap;

    unordered_map<int, vector<pair<int,int>>> adj;
    for(auto& edge : graph){
        adj[edge[0]].push_back({edge[1], edge[2]});
    }

    unordered_map<int,int> m;
    for(auto node : graph){
        m[node[0]] = INT_MAX;
        m[node[1]] = INT_MAX;
    }

    m[s] = 0;
    min_heap.push({0, s});
    unordered_set<int> visited;

    while(!min_heap.empty()){
        auto top = min_heap.top();
        int dist = top.first;
        int u = top.second;
        min_heap.pop();

        if(visited.count(u)) continue;
        visited.insert(u);

        for(auto node : adj[u]){
            if(m[node.first] > dist + node.second){
                m[node.first] = dist + node.second;
                min_heap.push({dist + node.second, node.first});
            }
        }
    }
    return m[target];
}

int main(){
    vector<vector<int>> graph;
    graph = {{1, 2, 2}, {1, 3, 1}, {1, 4, 10}, {2, 4, 3}, {3, 4, 6}};
    cout << dijkstra(graph, 1, 4);
    return 0;
}
