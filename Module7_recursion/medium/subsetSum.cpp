#include<bits/stdc++.h>
using namespace std;

class solution{
    public :
    void helper(vector<int> arr, int n, int sum, int ind, vector<int> &ans){
        if(ind == arr.size()) {
            ans.push_back(sum);
            return;
        }
        helper(arr, n, sum, ind+1, ans);
        helper(arr, n, sum+arr[ind], ind+1, ans);
    }
    
    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> ans;
        helper(arr, n, 0, 0, ans);
        return ans;
    }
};
