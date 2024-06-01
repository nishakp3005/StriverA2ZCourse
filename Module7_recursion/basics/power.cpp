#include<bits/stdc++.h>
using namespace std;
//using recursion 
class Solution {
public:
    double helper(double x, long long n){
        if(n == 1) return x;
        else if(n == 0) return 1;
        return x * helper(x, n-1);
    }
    double myPow(double x, long long n) {
        if(n < 0)
            return 1 / helper(x, -n);
        else 
            return helper(x, n);
    }
};


// alternate solution

// class Solution {
// public:
//     double myPow(double x, int n) {
        
//         if(n < 0) {
//             x = 1 / x;
//         } 
        
//         long num = labs(n);
        
//         double pow = 1;
        
//         while(num){ 
//             if(num & 1) { 
//                 pow *= x;
//             }
            
//             x *= x;
//             num >>= 1;
//         }
        
//         return pow;
//     }
// };