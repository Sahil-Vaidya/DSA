class Solution {
public:
    int solve(int n, vector<int>& nums, int curr, int prev, vector<vector<int>>& dp) {
        // Base case
        if (curr == n)
            return 0;
        
        if(dp[curr][prev+1] != -1)
            return dp[curr][prev+1];

        // Include
        int incl = 0;
        if (prev == -1 || nums[curr] > nums[prev])
            incl = 1 + solve(n, nums, curr + 1, curr, dp);

        // Exclude
        int excl = solve(n, nums, curr + 1, prev, dp);

        return dp[curr][prev+1] = max(incl, excl);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return solve(n, nums, 0, -1, dp);
    }
};