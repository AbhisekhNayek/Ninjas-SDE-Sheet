#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<queue>

void bfs(vector<vector<int>> &adj, vector<bool>& visited, vector<int>& ans, int node, int& n){

    queue<int> q;

    q.push(node);

    visited[node] = 1;

    while(!q.empty()){

        int front = q.front();
        ans.push_back(front);
        q.pop();

        for(int i=0; i<adj[front].size(); i++){

            int curr_node = adj[front][i];

            if(!visited[curr_node]){

                q.push(curr_node);
                visited[curr_node] = 1;

            }
        }
    }
} 

 vector<int> bfsTraversal(int n, vector<vector<int>> &adj){

    vector<bool> visited(n+1, false);
    vector<int> ans;

    bfs(adj, visited, ans, 0, n);

    return ans;
}
