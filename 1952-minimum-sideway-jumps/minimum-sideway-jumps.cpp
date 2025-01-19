class Solution {
public:
    // int solve(vector<int>& obstacles,int currlane,int currpos){
    //     //bsc
    //     int n=obstacles.size()-1;
    //     if(currpos==n)
    //         return 0;
        
    //     if(obstacles[currpos+1]!=currlane){
    //         return solve(obstacles,currlane,currpos+1);
    //     }
    //     else{
    //         //side way jump
    //         int ans=INT_MAX;
    //         for(int i=1;i<=3;i++){
    //             if(currlane!=1 && obstacles[currpos]!=i)
    //                 ans=min(ans,1 + solve(obstacles,i,currpos));
    //         }
    //     }
    //     return ans;
    // }

    int solvemem(vector<int>& obstacles,int currlane,int currpos,vector<vector<int>>& dp){
        //bsc
        int n=obstacles.size()-1;
        if(currpos==n)
            return 0;
        
        if(dp[currlane][currpos]!=-1)
            return dp[currlane][currpos];

        if (obstacles[currpos + 1] != currlane) {
        return solvemem(obstacles, currlane, currpos + 1, dp);
        } else {
        // sideway
        int ans = INT_MAX;
        for (int i = 1; i <= 3; i++) {
            if (currlane != i && obstacles[currpos] != i) {
                ans = min(ans, 1 + solvemem(obstacles, i, currpos, dp));
            }
        }
        dp[currlane][currpos] = ans;
        return dp[currlane][currpos];
        }
    }

    int minSideJumps(vector<int>& obstacles) {
        //return solve(obstacles,2,0);
        vector<vector<int>> dp(4, vector<int>(obstacles.size(), -1));
        return solvemem(obstacles,2,0,dp);
    }
};