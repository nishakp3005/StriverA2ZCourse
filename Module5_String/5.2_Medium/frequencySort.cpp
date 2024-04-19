#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mpp;
        for(char c : s) mpp[c]++;
        priority_queue<pair<int,char>> pq;
        for(auto it : mpp) pq.push({it.second, it.first});
        string ans = "";
        while(!pq.empty()){
            ans+=string(pq.top().first, pq.top().second); //frequency times the character
            pq.pop();
        }
        return ans;
    }
};