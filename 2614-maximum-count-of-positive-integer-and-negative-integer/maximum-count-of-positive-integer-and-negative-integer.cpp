class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negi = lower_bound(nums.begin(),nums.end(),0) - nums.begin();
        int posi = lower_bound(nums.begin(),nums.end(),1) - nums.begin();
        return max(negi, int(nums.size()) - posi);
    }
};