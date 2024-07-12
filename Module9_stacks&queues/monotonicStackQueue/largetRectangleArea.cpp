#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> smallLeft(n);
        vector<int> smallRight(n);
        stack<int> st;
        for(int i = 0; i < n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if(st.empty()) smallLeft[i] = 0;
            else smallLeft[i] = st.top()+1;
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if(st.empty()) smallRight[i] = n-1;
            else smallRight[i] = st.top()-1;
            st.push(i);
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = max(ans, heights[i] *((smallRight[i] - smallLeft[i]) + 1));
        }
        return ans;
    }
};