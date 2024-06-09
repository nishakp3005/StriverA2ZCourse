#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int perfectSum(int arr[], int n, int sum) {
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));
    
    // There's one way to get sum 0: use no elements
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            // Exclude the current element
            dp[i][j] = dp[i - 1][j];
            // Include the current element (if it does not exceed the sum)
            if (j >= arr[i - 1]) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - arr[i - 1]]) % MOD;
            }
        }
    }
    
    return dp[n][sum];
}