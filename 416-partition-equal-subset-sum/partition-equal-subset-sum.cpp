class Solution {
public:

    bool canPartition(vector<int>& nums) {
    int sum=0;
    int n=nums.size();
    for(int i=0;i<n;i++) sum+=nums[i];

    if(sum & 1) return false;

    int target = sum/2;
    vector<bool> dp(target+1,false);
    dp[0]=true;

    for(int num:nums)
        for(int i=target;i>=num;i--)
            dp[i] = dp[i] || dp[i-num];

    return dp[target];
}
};