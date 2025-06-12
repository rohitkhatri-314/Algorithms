#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& recStack, stack<int>& s) {
    visited[node] = true;
    recStack[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (!dfs(neighbor, adj, visited, recStack, s)) return false;
        } else if (recStack[neighbor]) {
            // Cycle detected
            return false;
        }
    }

    recStack[node] = false;
    s.push(node);
    return true;
}

int main() {
    vector<vector<int>> adj = {
        {1, 2}, // 0
        {3, 4}, // 1
        {4},    // 2
        {5},    // 3
        {5},    // 4
        {}      // 5
    };

    int n = adj.size();
    vector<bool> visited(n, false);
    vector<bool> recStack(n, false);
    stack<int> s;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            if (!dfs(i, adj, visited, recStack, s)) {
                cout << "Cycle detected. Topological sort not possible." << endl;
                return 0;
            }
        }
    }

    // Print topological order
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
