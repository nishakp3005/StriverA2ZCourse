#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int convertToInteger(string str, int index, int sign, long long result) {
        // Base case: if we reach the end of the string or a non-digit character
        if (index >= str.length() || !isdigit(str[index])) {
            return result * sign;
        }

        // Add the current digit to the result
        result = result * 10 + (str[index] - '0');

        // Handle overflow cases
        if (sign == 1 && result >= INT_MAX) {
            return INT_MAX;
        }
        if (sign == -1 && -result <= INT_MIN) {
            return INT_MIN;
        }

        // Recur for the next character
        return convertToInteger(str, index + 1, sign, result);
    }

    int myAtoi(string str) {
        int index = 0;
        int sign = 1;
        long long result = 0;

        // Ignore leading whitespaces
        while (index < str.length() && isspace(str[index])) {
            index++;
        }

        // Handle optional '+' or '-' sign
        if (index < str.length() && (str[index] == '+' || str[index] == '-')) {
            sign = (str[index] == '-') ? -1 : 1;
            index++;
        }

        // Start the recursive conversion
        return convertToInteger(str, index, sign, result);
    }
};