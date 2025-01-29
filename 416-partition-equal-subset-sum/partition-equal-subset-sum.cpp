class Solution {
public:
    // bool solve(int idx,vector<int>& nums,int n,int target){
    //     //base case
    //     if(idx>=n)  return false;
    //     if(target<0)    return false;
    //     if(target == 0) return true;
    //     bool incl=solve(idx+1,nums,n,target-nums[idx]);
    //     bool excl=solve(idx+1,nums,n,target-0);

    //     return incl or excl;
    // }

    // bool solvemem(int idx,vector<int>& nums,int n,int target,vector<vector<int>> dp){
    //     //base case
    //     if(idx>=n)  return false;
    //     if(target<0)    return false;
    //     if(target == 0) return true;
    //     if(dp[idx][target]!=-1) return dp[idx][target];
    //     bool incl=solvemem(idx+1,nums,n,target-nums[idx],dp);
    //     bool excl=solvemem(idx+1,nums,n,target,dp);
        
    //     return dp[idx][target] = incl or excl;
    // }

    // bool canPartition(vector<int>& nums) {
    //     int n=nums.size();
    //     int total=0;
    //     for(int i=0;i<n;i++){
    //         total +=nums[i];
    //     }

    //     if(total & 1)
    //         return false;
        
    //     int target =total/2;
    //     //return solve(0,nums,n,target);
    //     vector<vector<int>> dp(n,vector<int>(target+1,-1));
    //     return solvemem(0,nums,n,target,dp);
    // }

    bool canPartition(vector<int>& nums) {
    int n = nums.size();
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += nums[i];
    }

    if (total & 1)
        return false;

    int target = total / 2;

    vector<bool> dp(target + 1, false);
    dp[0] = true; 

    for (int num : nums) {
        for (int j = target; j >= num; j--) {
            dp[j] = dp[j] || dp[j - num];
        }
    }

    return dp[target];
}
};