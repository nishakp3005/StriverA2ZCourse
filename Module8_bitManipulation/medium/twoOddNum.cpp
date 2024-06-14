#include <bits/stdc++.h>
using namespace std;

vector<long long int> twoOddNum(long long int arr[], long long int n) {
    long long temp = 0;
    for (int i = 0; i < n; i++)
        temp = temp ^ arr[i];
    long long setBit = (temp & (temp - 1)) ^ temp;
    long long a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (setBit & arr[i])
            a = a ^ arr[i];
        else
            b = b ^ arr[i];
    }
    return {a, b};
}