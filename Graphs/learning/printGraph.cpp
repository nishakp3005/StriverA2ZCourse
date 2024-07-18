#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printGraph(int v, vector<pair<int,int>>edges) {
        vector<vector<int>> ans(v);
        for(auto &vec : edges){
            ans[vec.second].push_back(vec.first);
             ans[vec.first].push_back(vec.second);
        }
        return ans;
    }