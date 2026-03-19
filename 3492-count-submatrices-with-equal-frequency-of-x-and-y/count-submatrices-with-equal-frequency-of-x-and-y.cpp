class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        
        vector<vector<int>> xsum(n, vector<int>(m, 0));
        vector<vector<int>> ysum(n, vector<int>(m, 0));
        
        int cnt = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                
                int x = (grid[i][j] == 'X');
                int y = (grid[i][j] == 'Y');
                
                xsum[i][j] = x;
                ysum[i][j] = y;
                
                if(i > 0) {
                    xsum[i][j] += xsum[i-1][j];
                    ysum[i][j] += ysum[i-1][j];
                }
                if(j > 0) {
                    xsum[i][j] += xsum[i][j-1];
                    ysum[i][j] += ysum[i][j-1];
                }
                if(i > 0 && j > 0) {
                    xsum[i][j] -= xsum[i-1][j-1];
                    ysum[i][j] -= ysum[i-1][j-1];
                }
                
                if(xsum[i][j] == ysum[i][j] && xsum[i][j] > 0) {
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};