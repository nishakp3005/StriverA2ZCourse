#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
        stack<int> s;
        unordered_map<int, int> temp;
        vector<int> ans(nums1.size(), -1);
        for (int i = 0; i < nums2.size(); i++) {
            while (!s.empty() && nums2[i] > s.top()) {
                temp[s.top()] = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        for (int i = 0; i < nums1.size(); i++) {
            if (temp.find(nums1[i]) != temp.end()) {
                ans[i] = temp[nums1[i]];
            } else {
                ans[i] = -1;
            }
        }
        return ans;
    }
};