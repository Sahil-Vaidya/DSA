class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0, n = nums.size();
        
        for (int i = 0; i < n - 2; i++) {
            if (nums[i] == 0) {
                // uSe XOR to make 0-1 and 1-0
                nums[i] ^= 1;
                nums[i + 1] ^= 1;
                nums[i + 2] ^= 1;
                ans++;
            }
        }
        
        // check if any zero remain
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) return -1;
        }

        return ans;
    }
};
