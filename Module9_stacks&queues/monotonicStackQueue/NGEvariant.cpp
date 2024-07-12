#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices){
        vector<int> ans(queries);
        for(int i = 0; i < queries; i++){
            int ind = indices[i];
            int ele = arr[ind];
            int cnt = 0;
            for(int i = ind+1; i < arr.size(); i++){
                if(arr[i] > ele) cnt++;
            }
            ans[i] = cnt;
        }
        return ans;
    }

};