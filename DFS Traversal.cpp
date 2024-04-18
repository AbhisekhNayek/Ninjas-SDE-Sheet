void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &com) {
    com.push_back(node);
    visited[node] = true;

    for(auto i : adj[node]) { 
        if(!visited[i]) {
            dfs(i, visited, adj, com);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges) {
    // prepare ADJ List
    unordered_map<int, list<int>> adj;

    for(int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    unordered_map<int, bool> visited;

    for(int i = 0; i < V; i++) {
        if(!visited[i]) {
            vector<int> com;
            dfs(i, visited, adj, com);
            ans.push_back(com);
        }
    }

    return ans;
}
