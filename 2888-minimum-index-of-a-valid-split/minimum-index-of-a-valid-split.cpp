class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int candidate = nums[0], cnt = 0, totalcnt = 0;
        int n = nums.size();

        // Boyer-Moore Voting Algorithm to find the dominant element
        for (int num : nums) {
            if (cnt == 0) {
                candidate = num;
                cnt = 1;
            } else if (num == candidate) {
                cnt++;
            } else {
                cnt--;
            }
        }

        // Count occurrences of the dominant element
        for (int num : nums) {
            if (num == candidate) {
                totalcnt++;
            }
        }

        // Finding the minimum index where the condition holds
        int precnt = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == candidate) {
                precnt++;
            }
            // Check if candidate is dominant in both left and right parts
            if (precnt * 2 > (i + 1) && (totalcnt - precnt) * 2 > (n - i - 1)) {
                return i;
            }
        }

        return -1;
    }
};
