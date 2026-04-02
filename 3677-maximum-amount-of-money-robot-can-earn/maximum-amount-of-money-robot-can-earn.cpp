class Solution {
public:
int n;
int m;

    int solve(vector<vector<int>>& coins,int i,int j,int neu,vector<vector<vector<int>>>& dp){
        if(i==n-1 && j==m-1){
            if(coins[i][j]<0 && neu>0){
                return 0;//newtralize
            }
            return coins[i][j];
        }

        if(i>=n || j>=m)    return INT_MIN;//out of bound

        if(dp[i][j][neu] != INT_MIN)
            return dp[i][j][neu];

        //take
        int take=coins[i][j]+max(solve(coins,i+1,j,neu,dp),solve(coins,i,j+1,neu,dp));

        //skip
        //curr
        int skip=INT_MIN;

        if(coins[i][j]<0 && neu>0){
            int skipright=solve(coins,i,j+1,neu-1,dp);
            int skipdown=solve(coins,i+1,j,neu-1,dp);

            skip=max(skipright,skipdown);
        }

        return dp[i][j][neu]=max(take,skip);

    }

    int maximumAmount(vector<vector<int>>& coins) {
        n=coins.size();
        m=coins[0].size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(3, INT_MIN)));
        return solve(coins,0,0,2,dp);
    }
};