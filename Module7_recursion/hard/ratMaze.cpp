#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
    void helper(vector<vector<int>>& m, int n, vector<string>& ans, int row, int col, string path) {
        // If the rat reaches the bottom-right cell, add the path to the answer
        if (row == n-1 && col == n-1) {
            ans.push_back(path);
            return;
        }

        // Mark the current cell as visited
        m[row][col] = 0;

        // Move Down
        if (row + 1 < n && m[row + 1][col] == 1) {
            helper(m, n, ans, row + 1, col, path + "D");
        }

        // Move Right
        if (col + 1 < n && m[row][col + 1] == 1) {
            helper(m, n, ans, row, col + 1, path + "R");
        }

        // Move Up
        if (row - 1 >= 0 && m[row - 1][col] == 1) {
            helper(m, n, ans, row - 1, col, path + "U");
        }

        // Move Left
        if (col - 1 >= 0 && m[row][col - 1] == 1) {
            helper(m, n, ans, row, col - 1, path + "L");
        }

        // Mark the current cell as unvisited (backtracking)
        m[row][col] = 1;
    }

    vector<string> findPath(vector<vector<int>>& m, int n) {
        vector<string> ans;
        if (m[0][0] == 1) {
            helper(m, n, ans, 0, 0, "");
        }
        if (ans.empty()) {
            ans.push_back("-1");
        }
        return ans;
    }

};