class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int rightsum = 0;
        vector<int> ans;

        for (int num : nums) {
            rightsum += num;
        }

        int leftsum = 0;

        for (int i = 0; i < nums.size(); i++) {
            rightsum -= nums[i];              // remove current element from right sum
            ans.push_back(abs(leftsum - rightsum));
            leftsum += nums[i];               
        }

        return ans;
    }
};