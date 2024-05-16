#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            unordered_map<char, int> mpp;
            for(int j = i; j < s.length(); j++){
                mpp[s[j]]++;
                int maxi = 0;
                int mini = INT_MAX;
                for(auto it : mpp){
                    maxi = max(maxi, it.second);
                    mini = min(mini, it.second);
                }
                ans += (maxi - mini);
            }
        }
        return ans;
    }
};