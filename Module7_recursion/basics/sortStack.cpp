#include <bits/stdc++.h>
using namespace std;
stack<int> s;

void SortedStack () {
    stack<int> news;
    while (!s.empty()) {
        news.push(s.top());
        s.pop();
    }
    while (!news.empty()) {
        int top = news.top();
        news.pop();
        while (!s.empty() && s.top() > top) {
            news.push(s.top());
            s.pop();
        }

        s.push(top);
    }
}