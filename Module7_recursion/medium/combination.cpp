#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(int ind, vector<int>& candidates, int target, vector<vector<int>> &ans, vector<int> &temp){
        if(ind == candidates.size()){
            if(target == 0) {
                ans.push_back(temp);
            }
            return ;
        }
        if(target >= candidates[ind]){
            temp.push_back(candidates[ind]);
            helper(ind, candidates, target - candidates[ind], ans, temp);
            temp.pop_back();
        }
        helper(ind+1, candidates, target, ans, temp);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0, candidates, target, ans, temp);
        return ans;
    }
};