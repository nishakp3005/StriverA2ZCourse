#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int> &nums, int n) {
    stack<int> s;
    cout<<n<<endl;
    vector<int> ans(n, -1);
    for(int i = 0; i < n; i++){
        while(!s.empty() && s.top() >= nums[i]){
            s.pop();
        }
        if(!s.empty()) ans[i] = s.top();
        s.push(nums[i]);
    }
    for(int i : ans) cout<<ans[i] << " ";
    return ans;
}
