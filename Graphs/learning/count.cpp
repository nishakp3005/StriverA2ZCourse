#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long count(int n) {
        long long x = n *(n-1) /2;
        return pow(2, x);
    }
};