class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num = 0; 
        sort(nums.begin(), nums.end());
        for (int x : nums) {
            if (x == num) num++;
        }
        return num;
    }
};