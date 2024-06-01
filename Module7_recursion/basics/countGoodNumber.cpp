#define MOD 1000000007
#include<bits/stdc++.h>
class Solution {
public:
long long power(long long a,long long b){

    if(b==0) return 1;

    long long half_power= power(a,b/2);
    if(b%2 ==0)
    return half_power*half_power % MOD;

    else
    return half_power*half_power % MOD * (a % MOD) % MOD ;
}
int countGoodNumbers(long long n) {
    long long ed;
    long long od;
    if(n&1){
        od=n/2;
        ed=(n+1)/2;
    }
    else{
        od=n/2;
        ed=n/2;
    }
    return ((power(5,ed)%MOD)*(power(4,od)%MOD))%MOD;
}
};