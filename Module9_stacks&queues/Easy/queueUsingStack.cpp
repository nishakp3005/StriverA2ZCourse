#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;
    MyQueue() {
        stack<int> s1, s2;
        this->s1 = s1;
        this->s2 = s2;
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int ele = peek();
        s2.pop();
        return ele;
    }
    
    int peek() {
        if (s2.empty())
            while (s1.size())
                s2.push(s1.top()), s1.pop();
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};
