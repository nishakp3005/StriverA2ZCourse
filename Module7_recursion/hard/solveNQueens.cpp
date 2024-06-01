#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> lowerDiag, vector<int> upperDiag, vector<int> leftRow, int n){
        if(col >= n){
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++){
            if(lowerDiag[row + col] == 0 && leftRow[row] == 0 && upperDiag[n-1+col-row] == 0){
                lowerDiag[row + col] = 1;
                leftRow[row] = 1;
                upperDiag[n-1+col-row] = 1;
                board[row][col] = 'Q';
                solve(col + 1, board, ans, lowerDiag, upperDiag, leftRow, n);
                lowerDiag[row + col] = 0;
                leftRow[row] = 0;
                upperDiag[n-1+col-row] = 0;
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i = 0; i < n; i++)
            board[i] = s;
        vector<int> lowerDiag(2*n-1, 0), upperDiag(2*n-1, 0), leftRow(n, 0);
        solve(0, board, ans, lowerDiag, upperDiag, leftRow, n);
        return ans;
    }
};