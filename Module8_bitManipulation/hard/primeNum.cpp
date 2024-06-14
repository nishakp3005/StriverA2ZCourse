#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int ans = 0;
        vector<int> temp(n + 1, 1);
        for (int i = 2; i * i <= (n); i++) {
            if (temp[i]) {
                for (int j = i * i; j <= n; j += i) {
                    temp[j] = 0;
                }
            }
        }
        for (int i = 2; i < n; i++)
            if (temp[i] == 1)
                ans++;
        return ans;
    }
};