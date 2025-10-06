class Solution {
public:
    int dire[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
    
    bool reachable(int T, vector<vector<int>>& grid, int n, int i, int j, vector<vector<bool>>& visited) {
        // base case
        if (i == n - 1 && j == n - 1) return true;

        visited[i][j] = true;

        for (auto& d : dire) {
            int newi = i + d[0];
            int newj = j + d[1];

            if (newi >= 0 && newi < n && newj >= 0 && newj < n &&
                !visited[newi][newj] && grid[newi][newj] <= T) {
                
                if (reachable(T, grid, n, newi, newj, visited)) return true;
            }
        }
        return false;
    }

    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        int l = 0, h = n * n - 1;

        while (l < h) { 
            int mid = l + (h - l) / 2;
            vector<vector<bool>> visited(n, vector<bool>(n, false));

            if (grid[0][0] <= mid && reachable(mid, grid, n, 0, 0, visited)) {
                h = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};
