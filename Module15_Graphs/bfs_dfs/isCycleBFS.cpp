#include<bits/stdc++.h>
using namespace std;

    bool detect(int src, vector<int> adj[], vector<int> vis){
        vis[src] = 1;
        queue<pair<int, int>> q;
        q.push({src, -1});
        while(!q.empty()){
            int parent = q.front().second;
            int val = q.front().first;
            q.pop();
            for(auto node : adj[val]){
                if(!vis[node]) {
                    vis[node] = 1;
                    q.push({node, val});
                }
                else{
                    if(node != parent) return true;
                }
            }
        }
        return false;
    }
    
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V, 0);
        for(int i = 0; i<V; i++){
            if(!vis[i]) {
                if(detect(i, adj, vis)) return true;
            } 
        }
        return false;
        
    }