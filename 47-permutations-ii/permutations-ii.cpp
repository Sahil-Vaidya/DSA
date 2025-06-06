class Solution {
public:
    void per(vector<int>& nums, int idx, set<vector<int>> &ans) {
            if (idx == nums.size()) {
                ans.insert(nums);
                return;
            }

            for (int i = idx; i < nums.size(); i++) {
                swap(nums[idx], nums[i]);
                per(nums, idx + 1, ans);
                swap(nums[idx], nums[i]);  // Backtrack
            }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        per(nums, 0, ans);
        return vector<vector<int>>(ans.begin(),ans.end());//sort
    }
};