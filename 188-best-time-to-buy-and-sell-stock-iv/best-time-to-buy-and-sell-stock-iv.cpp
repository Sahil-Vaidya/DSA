class Solution {
public:
    int solve(int idx, int buy,vector<int>& prices,int limit,vector<vector<vector<int>>>& dp){

        if(idx==prices.size())  return 0;
        if(limit==0)    return 0;
        if (dp[idx][buy][limit] != -1) return dp[idx][buy][limit];

        int profit=0;
        if(buy){
            int buythis = -prices[idx]+solve(idx+1,0,prices,limit,dp);
            int ignorethis = 0+solve(idx+1,1,prices,limit,dp);
            profit= max(buythis,ignorethis);
            //profit = max( (-prices[idx]+solve(idx+1,0,prices)) , (0+solve(idx+1,1,prices)) );
        }else{
            int sellkaro = +prices[idx] + solve(idx+1,1,prices,limit-1,dp);
            int ignorekaro = 0+solve(idx+1,0,prices,limit,dp);
            profit = max(sellkaro,ignorekaro);
            //profit = max( (+prices[idx] + solve(idx+1,1,prices)) , (0,solve(idx+1,0,prices)) );
        }
        return dp[idx][buy][limit] = profit;
    }

    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k + 1, -1)));
        return solve(0,1,prices,k,dp);
    }
};