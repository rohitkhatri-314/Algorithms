#include <bits/stdc++.h>
using namespace std;

void bellman(int source, int n, vector<vector<int>>&edges){
    vector<int>dist(n,INT_MAX);
    dist[source]=0;
    
    for(int i=0;i<n-1;i++){
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            int wt=x[2];

            if(dist[u]!=INT_MAX) dist[v]=min(dist[v],dist[u]+wt);
        }
    }

    for(auto x:edges){
        int u=x[0];
        int v=x[1];
        int wt=x[2];

        if(dist[u]!=INT_MAX && dist[u]+wt<dist[v]){
            cout<<"Negative Cycle Present! Bellman Algo can't be applied";
            return ;
        }
    }
    for(int i=0;i<n;i++){
        cout<<"min dist from source to "<<i<<"th node is "<< dist[i]<<endl;
    }
}

int main()
{
    vector<vector<int>>edges={{0,1,2},{0,2,2},{1,2,-1}};
    int n=3;
    int source=0;
    bellman(source,n,edges);

return 0;
}