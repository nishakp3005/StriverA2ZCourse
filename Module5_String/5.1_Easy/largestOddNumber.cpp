#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int len = num.length()-1;
        // cout<<len;
        int i = len;
        while(i >= 0){
            cout<<i<<" ";
            if((num[i] - '0') % 2 != 0) return num.substr(0, i+1);
            i--;
        }
        return "";
    }
};