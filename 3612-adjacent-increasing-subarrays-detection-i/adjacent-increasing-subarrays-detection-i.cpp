class Solution {
public:
    bool isinc(int start, vector<int>& nums, int k) {
        for (int i = start; i < start + k - 1; i++) {
            if (nums[i] >= nums[i + 1]) 
                return false;
        }
        return true;
    }

    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 1) return true;
        if (n < 2 * k) return false;

        
        for (int i = 0; i <= n - 2 * k; i++) {
            if (isinc(i, nums, k) && isinc(i + k, nums, k)) 
                return true;
        }

        return false;
    }
};