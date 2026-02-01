class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size();
        int first=nums[0];
        int mini1=INT_MAX,mini2=INT_MAX;
        for(int i=1;i<n;i++){
            if(nums[i]<=mini1 || nums[i]<=mini2){
                mini2=min(mini2,mini1);
                mini1=nums[i];
            }
        }
        return first+mini1+mini2;
    }
};