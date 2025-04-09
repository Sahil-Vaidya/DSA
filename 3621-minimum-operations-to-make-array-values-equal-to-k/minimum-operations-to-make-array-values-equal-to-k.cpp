class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> uno;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<k) return -1;
            else if(nums[i]>k)  uno.insert(nums[i]);
        }
        return uno.size();
    }
};