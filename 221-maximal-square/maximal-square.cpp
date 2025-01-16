class Solution {
public:
    // int solve(vector<vector<char>>& mat,int i,int j,int &maxi){
    //     //bs
    //     if(i>= mat.size() || j>=mat[0].size());
    //         return 0;
        
    //     int right=solve(mat,i,j+1,maxi);
    //     int dia=solve(mat,i+1,j+1,maxi);
    //     int down=solve(mat,i+1,j,maxi);

    //     if(mat[i][j]== 1){
    //         int ans=1+min(right,min(dia,down));
    //         maxi=max(maxi,ans);
    //         return ans;
    //     }else{
    //         return 0;
    //     }
    // }

    int solve(vector<vector<char>>& mat, int i, int j, vector<vector<int>>& dp) {
    if (i >= mat.size() || j >= mat[0].size()) {
        return 0;
    }
    
    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    int right = solve(mat, i, j + 1, dp);
    int dia = solve(mat, i + 1, j + 1, dp);
    int down = solve(mat, i + 1, j, dp);

    if (mat[i][j] == '1') {
        dp[i][j] = 1 + min(right, min(dia, down));
    } else {
        dp[i][j] = 0;
    }

    return dp[i][j];
}

int maximalSquare(vector<vector<char>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) {
        return 0;
    }
    
    int m = matrix.size();
    int n = matrix[0].size();
    int maxi = 0;
    
    vector<vector<int>> dp(m, vector<int>(n, -1));
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            solve(matrix, i, j, dp);
            maxi = max(maxi, dp[i][j]);
        }
    }
    
    return maxi * maxi; 
}

};