#include<bits/stdc++.h>
using namespace std;

class MyStack {
public: 
    queue<int> q1, q2;
    MyStack() {
        queue<int> q1, q2;
        this->q1 = q1;
        this->q2 = q2;
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    
    int pop() {
        int front = q1.front();
        q1.pop();
        return front;
    }
    
    int top() {
        if(q1.empty()) return -1;
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */