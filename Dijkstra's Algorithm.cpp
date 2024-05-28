#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &a, int v, int edges, int source) {
    // Write your code here.
    vector<pair<int,int>> adj[v];
    for(int i=0;i<edges;i++){
        adj[a[i][0]].push_back({a[i][1],a[i][2]});
        adj[a[i][1]].push_back({a[i][0],a[i][2]});
    }
    
    priority_queue<pair<int,int>> pq;
    pq.push({source,0});
    vector<int> dist(v,INT_MAX);
    dist[source]=0;

    while(!pq.empty()){
        int curr_node=pq.top().first;
        int curr_dist=pq.top().second;
        pq.pop();

        for(auto i:adj[curr_node]){
            int new_node=i.first;
            int new_dist=i.second;

            if(curr_dist+new_dist<dist[new_node]){
                dist[new_node]=curr_dist+new_dist;
                pq.push({new_node,dist[new_node]});
            }
        }
    }
    return dist;
}
