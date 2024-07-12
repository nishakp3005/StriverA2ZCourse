#include<bits/stdc++.h>
using namespace std;

 bool isOperator(char x) {
    switch (x) {
    case '+':
    case '-':
    case '/':
    case '*':
    case '^':
    case '%':
        return true;
    }
    return false;
}
  
    string postToInfix(string s) {
        stack<string> st;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (isOperator(s[i])) {
                string temp1 = st.top();
                st.pop();
                string temp2 = st.top();
                st.pop();
                string temp = "(" + temp2 + s[i] +  temp1 + ")";
                st.push(temp);
            } else {
                st.push(string(1, s[i]));
            }
        }
        return st.top();
    }