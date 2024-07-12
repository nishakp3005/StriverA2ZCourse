#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto itr:s){
            if(itr=='('||itr=='['||itr=='{')
                st.push(itr);
            else{
                if(st.empty()||abs(itr-st.top())>2)
                    return false;
                else
                    st.pop();
            }
        }
        return st.empty();
    }
};