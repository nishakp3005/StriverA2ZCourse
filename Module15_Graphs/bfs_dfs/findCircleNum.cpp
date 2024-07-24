#include<bits/stdc++.h>
using namespace std;

class Solution {

    void dfs(vector<vector<int>>& isConnected, int u, vector<bool> &vis) {
        vis[u] = true;
        for(int v = 0; v < isConnected[0].size(); v++){
            if(isConnected[u][v] && !vis[v]) dfs(isConnected, v, vis);
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected[0].size(), ans = 0;
        vector<bool> vis(n, false);
        for(int i = 0; i < n; i++){
            if(!vis[i]) {
                ans++;
                dfs(isConnected, i, vis);
            }
        }
        return ans;
    }
};