#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(int row, int col, vector<vector<bool>>& vis, vector<vector<char>>& board) {
        int n = board.size(), m = board[0].size();
        vis[row][col] = true;
        
        vector<int> delRow = {-1, 0, 1, 0};
        vector<int> delCol = {0, 1, 0, -1};
        
        for(int i = 0; i < 4; i++) {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && board[nrow][ncol] == 'O') {
                dfs(nrow, ncol, vis, board);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        if (n == 0) return;
        int m = board[0].size();
        
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        
        for(int j = 0; j < m; j++) {
            if(board[0][j] == 'O' && !vis[0][j]) {
                dfs(0, j, vis, board);
            }
            if(board[n-1][j] == 'O' && !vis[n-1][j]) {
                dfs(n-1, j, vis, board);
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(board[i][0] == 'O' && !vis[i][0]) {
                dfs(i, 0, vis, board);
            }
            if(board[i][m-1] == 'O' && !vis[i][m-1]) {
                dfs(i, m-1, vis, board);
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(board[i][j] == 'O' && !vis[i][j]) {
                    board[i][j] = 'X';
                }
            }
        }
    }
};