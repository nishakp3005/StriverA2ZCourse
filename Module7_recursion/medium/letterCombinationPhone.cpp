#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(string digits, vector<string> &ans, int ind, string temp, unordered_map<char, string> mpp){
        if(ind == digits.length()) {
            ans.push_back(temp);
        }
        for(int i = 0; i < mpp[digits[ind]].size(); i++){
            helper(digits, ans, ind+1, temp + mpp[digits[ind]][i] , mpp);
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits == "") return { };
        unordered_map<char, string> mpp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        vector<string> ans;
        helper(digits, ans, 0, "", mpp);
        return ans;
    }
};