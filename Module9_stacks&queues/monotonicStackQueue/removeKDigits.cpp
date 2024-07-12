#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> stack;
        
        for (char digit : num) {
            while (!stack.empty() && k > 0 && stack.top() > digit) {
                stack.pop();
                k--;
            }
            stack.push(digit);
        }
        
        while (k > 0 && !stack.empty()) {
            stack.pop();
            k--;
        }
        
        std::string result;
        while (!stack.empty()) {
            result += stack.top();
            stack.pop();
        }
        std::reverse(result.begin(), result.end());

        int i = 0;
        while(result[i] == '0') result.erase(0, 1);
        if(result == "") return "0";
        return result;
    }
};