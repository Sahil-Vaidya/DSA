class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0; // No triplet possible

        vector<int> maxPrefix(n, 0);
        vector<int> maxSuffix(n, 0);

        // Step 1: Build maxPrefix
        maxPrefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            maxPrefix[i] = max(maxPrefix[i - 1], nums[i]);
        }

        // Step 2: Build maxSuffix
        maxSuffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            maxSuffix[i] = max(maxSuffix[i + 1], nums[i]);
        }

        // Step 3: Find maximum triplet value
        long long maxi = 0;
        for (int j = 1; j < n - 1; j++) {
            maxi = max(maxi, (long long)(maxPrefix[j - 1] - nums[j]) * maxSuffix[j + 1]);
        }

        return maxi;
    }
};