class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    dp[i][j] = (j == 0 ? 1 : dp[i][j-1] + 1);
                }
            }
        }

         int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int mi = dp[i][j];
                for (int k = i; k >= 0 && mi > 0; k--) {
                    mi = min(mi, dp[k][j]);
                    ans += mi;
                }
            }
        }
        
        return ans;
    }
};