#include <bits/stdc++.h>
using namespace std;

bool dfs(int src, int parent, vector<int> adj[], vector<int> vis) {
    vis[src] = 1;
    for (auto i : adj[src]) {
        if (!vis[i]) {
            vis[i] = 1;
            if (dfs(i, src, adj, vis))
                return true;
        } else if (i != parent)
            return true;
    }
    return false;
}

// Function to detect cycle in an undirected graph.
bool isCycle(int V, vector<int> adj[]) {
    vector<int> vis(V, 0);
    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            if (dfs(i, -1, adj, vis))
                return true;
        }
    }
    return false;
}