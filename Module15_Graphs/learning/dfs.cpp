#include <bits/stdc++.h>
using namespace std;

void solve(int node, vector<int> &ans, unordered_map<int, bool> &vis, vector<int> adj[]) {
    ans.push_back(node);
    if (vis[0] != true)
        vis[0] = true;
    for (auto i : adj[node]) {
        if (!vis[i]) {
            vis[i] = true;
            solve(i, ans, vis, adj);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<int> ans;
    unordered_map<int, bool> vis;
    solve(0, ans, vis, adj);
    return ans;
}