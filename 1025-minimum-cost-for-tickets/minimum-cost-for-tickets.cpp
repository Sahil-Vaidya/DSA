class Solution {
public:
    // int solve(int n,vector<int>& days, vector<int>& costs,int idx){
    //     //base case
    //     if(idx>=n){
    //         return 0;
    //     }

    //     //day 1
    //     int opt1= costs[0] + solve(n,days,costs,idx+1);

    //     //day2
    //     int i;
    //     for(int i=idx;i<n && days[i]<days[idx]+7;i++);

    //     int opt2=costs[1]+solve(n,days,costs,i);

    //     //day3
    //     for(int i=idx;i<n && days[i]<days[idx]+30;i++);

    //     int opt3=costs[1]+solve(n,days,costs,i);

    //     return min(opt1,min(opt2,opt3));

    // }

    int solvemem(int n,vector<int>& days, vector<int>& costs,int idx,vector<int>& dp){
        //base case
        if(idx>=n){
            return 0;
        }

        if(dp[idx]!=-1)
            return dp[idx];

        //1-day pass
        int opt1 = costs[0] + solvemem(n, days, costs, idx + 1, dp);

        //7-day pass
        int i;
        for (i = idx; i < n && days[i] < days[idx] + 7; i++);

        int opt2 = costs[1] + solvemem(n, days, costs, i, dp);

        //30-day pass
        for (i = idx; i < n && days[i] < days[idx] + 30; i++);

        int opt3 = costs[2] + solvemem(n, days, costs, i, dp);

        dp[idx] = min(opt1,min(opt2,opt3));
        return dp[idx];

    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        // return solve(n,days,costs,0);
        vector<int> dp(n+1,-1);
        return solvemem(n,days,costs,0,dp);


    }
};