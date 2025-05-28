#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &adj,int start){
    stack<int> st;
    set<int> visited;
    st.push(start);

    while(!st.empty()){
        int curr=st.top();
        st.pop();

        if(visited.count(curr)) continue;
        visited.insert(curr);
        cout<<curr<<" ";

        for(auto it = adj[curr].rbegin(); it != adj[curr].rend(); ++it){
          if(!visited.count(*it)){
            st.push(*it); 
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
    dfs(adj,0);
return 0;
}