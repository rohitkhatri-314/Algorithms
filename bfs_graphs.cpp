#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>& adj,int start){
    queue<int> q;
    q.push(start);
    set<int> visited;
    visited.insert(start);
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        cout<<curr<<" ";
        for(auto v:adj[curr]){
            if(!visited.count(v)){
                q.push(v);
                visited.insert(v);
            }
        }
    }
    return;
}

int main(){
    vector<vector<int>> adj={
        {1,3},
        {0,2,3,5,6},
        {1,3,4,5},
        {0,1,2,4},
        {2,3,6},
        {1,2},
        {1,4}
    };

bfs(adj,0);
return 0;
}