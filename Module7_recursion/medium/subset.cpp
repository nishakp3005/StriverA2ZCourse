#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>> &ans, int i,vector<int>& subset){
        if(i == nums.size()) {
            ans.push_back(subset);
            return ;
        }
        subset.push_back(nums[i]);
        helper(nums, ans, i+1, subset);
        subset.pop_back();
        helper(nums, ans, i+1, subset);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        helper(nums, ans, 0, subset);
        return ans;
    }
};