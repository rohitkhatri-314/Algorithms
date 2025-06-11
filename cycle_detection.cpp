#include <bits/stdc++.h>
using namespace std;

bool dfs(int node,vector<vector<int>>&adj,set<int>&visited,set<int>&pathnodes){
    visited.insert(node);
    pathnodes.insert(node);
    for(auto x:adj[node]){
        if(!visited.count(x)){
            if(dfs(x,adj,visited,pathnodes)) return true;
        }else if(pathnodes.count(x)){
            return true;
        }
    }
    pathnodes.erase(node);
    return false;;
}

bool checkCycle(vector<vector<int>>& adj) {
    int n = adj.size();
    set<int> visited, pathnodes;
    for (int i = n-1; i >=0; i--) {
        if (!visited.count(i)) {
            if (dfs(i, adj, visited, pathnodes)) return true;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> adj={
         {1},
        {3,4},
        {4},
        {5},
        {},
        {1}
    };
 cout<<checkCycle(adj);
return 0;
}