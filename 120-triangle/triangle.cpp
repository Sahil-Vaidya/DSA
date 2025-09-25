class Solution {
public:
    // int solve(vector<vector<int>>& t,int i,int j,vector<vector<int>> &dp,int n){
    //     if (i == n - 1) 
    //         return t[i][j];

    //     if(dp[i][j]!=-1)    return dp[i][j];

    //     int choice1=t[i][j]+solve(t,i+1,j,dp,n);
    //     int choice2=t[i][j]+solve(t,i+1,j+1,dp,n);

    //     return dp[i][j]=min(choice1,choice2);
    // }


    int minimumTotal(vector<vector<int>>& triangle) {
    //     int n=triangle.size();
    //    vector<vector<int>> dp(n, vector<int>(n, -1));
    //     return solve(triangle,0,0,dp,n);
    int n = triangle.size();
        vector<int> dp = triangle.back();  

        // move upward
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
            }
        }
        return dp[0];
    }
};