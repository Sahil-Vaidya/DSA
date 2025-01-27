class Solution {
public:
    // int solve(int idx,int endidx,vector<int>& slices,int n){
    //     //base case
    //     if(n == 0 || idx > endidx){
    //         return 0;
    //     }

    //     int inclu = slices[idx] + solve(idx+2,endidx,slices,n-1);
    //     int excl= 0 + solve(idx+1,endidx,slices,n);
    //     return max(inclu,excl);
    // }

    int solvemem(int idx,int endidx,vector<int>& slices,int n,vector<vector<int>> &dp){
        //base case
        if(n == 0 || idx > endidx){
            return 0;
        }

        if(dp[idx][n]!=-1)
            return dp[idx][n];

        int inclu = slices[idx] + solvemem(idx+2,endidx,slices,n-1,dp);
        int excl= 0 + solvemem(idx+1,endidx,slices,n,dp);
        return dp[idx][n] = max(inclu,excl);
    }


    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();
        // int case1= solve(0,k-2,slices,k/3);//noteat
        // int case2=solve(1,k-1,slices,k/3);//eat
        // return max(case1,case2);

        vector<vector<int>>dp1(k,vector<int>(k,-1));
        int case1= solvemem(0,k-2,slices,k/3,dp1);
        
        vector<vector<int>>dp2(k,vector<int>(k,-1));
        int case2=solvemem(1,k-1,slices,k/3,dp2);
        return max(case1,case2);
    }
};