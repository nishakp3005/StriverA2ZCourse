#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void insertAtBottom(stack<int> &St, int element) {
        if (St.empty()) {
            St.push(element);
            return;
        }

        int topElement = St.top();
        St.pop();
        insertAtBottom(St, element);
        St.push(topElement);
    }
    void Reverse(stack<int> &St) {
        if (St.empty())
            return;
        int top = St.top();
        St.pop();
        Reverse(St);
        insertAtBottom(St, top);
    }
};