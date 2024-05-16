#include <iostream>
#include <unordered_map>
using namespace std;

int atMost(string s, int k) {
    if (s.empty()) return 0;
    unordered_map<char, int> charCount;
    int num = 0, left = 0;

    for (int i = 0; i < s.length(); ++i) {
        charCount[s[i]]++;
        while (charCount.size() > k) {
            charCount[s[left]]--;
            if (charCount[s[left]] == 0) {
                charCount.erase(s[left]);
            }
            left++;
        }
        num += i - left + 1;
    }
    return num;
}

int countSubStrings(string s, int k) {
    return atMost(s, k) - atMost(s, k - 1);
}