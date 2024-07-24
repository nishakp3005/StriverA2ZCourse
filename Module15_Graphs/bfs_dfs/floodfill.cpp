#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void dfs(vector<vector<int>>& image, int sr, int sc, int initColor, int final, vector<int> delRow, vector<int> delCol){
        int n = image.size(), m = image[0].size();
        image[sr][sc] = final;
        for(int i = 0; i < 4; i++){
            int nrow = sr + delRow[i];
            int ncol = sc + delCol[i];
            if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && image[nrow][ncol] == initColor && image[nrow][ncol] != final) {
                dfs(image, nrow, ncol, initColor, final, delRow, delCol);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<int> delRow = {-1, 0, +1, 0};
        vector<int> delCol = {0, 1, 0, -1};
        int initColor = image[sr][sc];
        dfs(image, sr, sc, initColor, color, delRow, delCol);
        return image;
    }
};