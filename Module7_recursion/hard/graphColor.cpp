#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSafe(bool graph[101][101], int node, int color[], int n, int clr) {
        for (int i = 0; i < n; i++) {
            if (i != node && color[i] == clr && graph[i][node] == 1)
                return false;
        }
        return true;
    }

    bool helper(bool graph[101][101], int m, int n, int color[], int node) {
        if (node == n) {
            return true;
        }

        for (int i = 1; i <= m; i++) {
            if (isSafe(graph, node, color, n, i)) {
                color[node] = i;
                if (helper(graph, m, n, color, node + 1))
                    return true;
                color[node] = 0;
            }
        }
        return false;
    }

    bool graphColoring(bool graph[101][101], int m, int n) {
        int color[n] = {0};
        if (helper(graph, m, n, color, 0))
            return true;
        return false;
    }
};