#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        vector<int> ans(nums.size(), -1);
        int n = nums.size();
        for(int i = 2*n-1; i >= 0; i--){
            while(!s.empty() && (nums[i%n] >= s.top())){
                s.pop();
            }
            if(!s.empty() && (i<n))
                ans[i] = s.top();
            s.push(nums[i%n]);
        }
        return ans;
    }
};