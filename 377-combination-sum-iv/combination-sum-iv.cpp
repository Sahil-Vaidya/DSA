class Solution {
public:
    int solvemem(vector<int>& nums, int target, vector<int>& dp) {
    // base case
    if (target < 0)
        return 0;

    if (target == 0)
        return 1;

    if (dp[target] != -1)
        return dp[target];

    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += solvemem(nums, target - nums[i], dp);
    }

    dp[target] = sum;
    return dp[target];
    }


    // int solve(vector<int>& nums, int target){
    //     //base case
    //     if(target<0)
    //         return 0;
        
    //     if(target==0)
    //         return 1;
        
    //     int sum=0;
    //     for(int i=0;i<nums.size();i++){
    //         sum +=solve(nums,target-nums[i]);
    //     }
    //     return sum;
    // }


    int combinationSum4(vector<int>& nums, int target) {
        //return solve(nums,target);

        vector<int> dp(target + 1, -1); 
        return solvemem(nums, target, dp);
    }
};