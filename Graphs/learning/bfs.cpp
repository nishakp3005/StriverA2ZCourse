#include<bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        queue<int> q;
        q.push(0);
        vector<int> vis(V, 0);
        vis[0] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto i : adj[node]){
                if(!vis[i]) {
                    q.push(i);
                    vis[i] = 1;
                }
            }
        }
        return ans;
    }