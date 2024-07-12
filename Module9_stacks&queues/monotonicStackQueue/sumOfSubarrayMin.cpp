#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int mod = 1e9 + 7;
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        stack<pair<int, int>> sLeft, sRight;
        vector<int> left(n, 0), right(n, 0);
        for(int i = 0; i < n; i++){
            int cnt = 1;
            while(!sLeft.empty() && sLeft.top().first > arr[i]){
                cnt += sLeft.top().second;
                sLeft.pop();
            }
            sLeft.push({arr[i], cnt});
            left[i] = cnt;
        }
        for(int i = n-1; i >= 0; i--){
            int cnt = 1;
            while(!sRight.empty() && sRight.top().first >= arr[i]){
                cnt += sRight.top().second;
                sRight.pop();
            }
            sRight.push({arr[i], cnt});
            right[i] = cnt;
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = (ans + (arr[i] * (long long)(left[i] * right[i])%mod)%mod)%mod;
        }
        return ans;
    }
};