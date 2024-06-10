#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
    void bitManipulation(int num, int i) {
        int get = !((num | (1 << (i - 1))) ^ num);
        int set = num | (1 << (i - 1));
        int clear = num & ~(1 << (i - 1));
        cout << get << ' ' << set << ' ' << clear;
    }
};