class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3)    return false;
        int left=INT_MAX,mid=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>mid) return true;
            else if(nums[i]>left && nums[i]<mid)    mid=nums[i];
            else if(nums[i]<left)   left=nums[i];
        }
        return false;
    }
};