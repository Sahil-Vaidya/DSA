class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;  

        unordered_map<int, unordered_map<int, int>> dp;
        
        int ans = 2; 

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {  
                int diff = nums[j] - nums[i];
                dp[j][diff] = dp[i][diff] + 1;
                ans = max(ans, dp[j][diff] + 1);
            }
        }
        return ans;
    }
};
