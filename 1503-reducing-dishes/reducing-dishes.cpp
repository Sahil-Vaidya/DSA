class Solution {
public:
    int solve(vector<int>& satisfaction,int idx,int time,vector<vector<int>>& dp){
        //bsc
        if(idx==satisfaction.size())
            return 0;
        if(dp[idx][time]!=-1)
            return dp[idx][time];

        int incl= satisfaction[idx]*(time+1) + solve(satisfaction,idx+1,time+1,dp);
        int excl= 0 + solve(satisfaction,idx+1,time,dp);

        // return max(incl,excl);
        return dp[idx][time]=max(incl,excl);
    }

    int maxSatisfaction(vector<int>& satisfaction) {
        //sort
        sort(satisfaction.begin(),satisfaction.end());
        //return solve(satisfaction,0,0);
        int n=satisfaction.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(satisfaction,0,0,dp);
    }
};