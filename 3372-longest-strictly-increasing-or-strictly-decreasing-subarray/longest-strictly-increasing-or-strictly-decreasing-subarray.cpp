class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0; 

        int maxi = 1, maxd = 1;
        int cnti = 1, cntd = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                cnti++;
                cntd = 1;  
            } 
            else if (nums[i] < nums[i - 1]) {
                cntd++;
                cnti = 1;  
            } 
            else {
                cnti = 1;
                cntd = 1;
            }

            maxi = max(maxi, cnti);
            maxd = max(maxd, cntd);
        }
        return max(maxi, maxd);
    }
};
