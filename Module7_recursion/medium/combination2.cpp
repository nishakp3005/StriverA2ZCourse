#include<bits/stdc++.h>
using namespace std;

class Solution {
public: 
    void helper(vector<int>& candidates, int target, int ind, int sum, vector<vector<int>> &ans, vector<int> &temp) {
        if (sum == target) {
            ans.push_back(temp);
            return;
        }
        if (sum > target) return;
        for (int i = ind; i < candidates.size(); ++i) {
            if (i > ind && candidates[i] == candidates[i-1]) continue; // skip duplicates
            temp.push_back(candidates[i]);
            helper(candidates, target, i + 1, sum + candidates[i], ans, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); // sort candidates to handle duplicates
        vector<vector<int>> ans;
        vector<int> temp;
        helper(candidates, target, 0, 0, ans, temp);
        return ans;
    }
};
