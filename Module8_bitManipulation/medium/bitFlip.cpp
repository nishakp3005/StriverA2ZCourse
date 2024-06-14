class Solution {
public:
    int minBitFlips(int start, int goal) {
        int temp = start ^ goal;
        int bit = 1;
        int ans = 0;
        for(int i = 0;i<31;i++){
            if(temp & (1 << i))
            ans++;
        }
        return ans;
    }
};