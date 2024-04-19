#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp;
        for(int i = 0; i < s.length(); i++){
            mpp[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++){
            mpp[t[i]]--;
        }
        for (auto i = mpp.begin(); i != mpp.end(); i++) {
            if(i->second != 0) return false;
        }
        return true;
    }
};