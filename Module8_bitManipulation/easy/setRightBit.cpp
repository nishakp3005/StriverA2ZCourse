#include<bits/stdc++.h>
using namespace std;

class Solution {
    public : 
    int setRightmostUnsetBit(int N) {
      if (N == 0 || N == -1) {
        return N; 
      }
      int rightmostUnsetBit = ~N & (N + 1);
      return N | rightmostUnsetBit;
    }

    int setBit(int N) {
     return setRightmostUnsetBit(N);
    }
};