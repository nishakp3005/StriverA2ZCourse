#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPrimeFactors(int N) {
        vector<int> arr(N + 1, 1);
        for (int i = 2; i * i <= N; i++) {
            if (arr[i] == 1) {
                arr[i] = i;
                for (int j = i * i; j <= N; j += i) {
                    arr[j] = i;
                }
            }
        }
        vector<int> result;
        while (N != 1) {
            if (arr[N] == 1) {
                result.emplace_back(N);
                break;
            }
            result.emplace_back(arr[N]);
            N /= arr[N];
        }
        sort(result.begin(), result.end());
        return result;
    }
};