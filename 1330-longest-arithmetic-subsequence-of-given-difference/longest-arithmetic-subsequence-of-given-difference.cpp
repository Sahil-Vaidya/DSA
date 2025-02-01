class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int> dp;
        int ans=0;

        for(int i=0;i<arr.size();i++){
            int temp = arr[i] - difference;
            int exist=0;

            if(dp.count(temp))
                exist = dp[temp];
            
            //update ans
            dp[arr[i]] = 1 + exist;

            ans=max(ans,dp[arr[i]]);
        }
        return ans;
    }
};